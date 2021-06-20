#define _CRT_SECURE_NO_WARNINGS 1
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#define SetLOAD GpioDataRegs.GPADAT.bit.GPIO17=1;
#define ClrLOAD GpioDataRegs.GPADAT.bit.GPIO17=0;

void WriteDAC(unsigned char add, unsigned char rng, unsigned char vol);
void delay(unsigned int t);
void spi_xmit(Uint16 a);
void spi_fifo_init(void);
void spi_init(void);
#define ADC_MODCLK 0x5
#define ADC_CKPS 0x1
#define ADC_SHCLK 0xf
#define AVG      100
#define ZOFFSET 0x00
#define BUF_SIZE 2048
Uint16 SampleTable[BUF_SIZE];
float Vin = 0;

void main(void)
{
	int temp;
	Uint16 i;
	Uint32 Sum = 0;

	InitSysCtrl();
	EALLOW;
	SysCtrlRegs.HISPCP.all = ADC_MODCLK;
	EDIS;

	InitSpiaGpio();
	EALLOW;
	GpioCtrlRegs.GPAMUX2.bit.GPIO17 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO17 = 1;
	GpioCtrlRegs.GPAPUD.bit.GPIO17 = 0;
	EDIS;

	DINT;
	IER = 0X0000;
	IFR = 0X0000;

	InitPieCtrl();
	InitPieVectTable();
	InitAdc();
	spi_init();
	EINT;
	ERTM;
	AdcRegs.ADCTRL1.bit.ACQ_PS = ADC_SHCLK;
	AdcRegs.ADCTRL3.bit.ADCCLKPS = ADC_CKPS;
	AdcRegs.ADCTRL1.bit.SEQ_CASC = 1;
	AdcRegs.ADCCHSELSEQ1.bit.CONV00 = 0x1;
	AdcRegs.ADCTRL1.bit.CONT_RUN = 1;

	for (i = 0; i < BUF_SIZE; i++)
	{
		SampleTable[i] = 0;

	}

	SetLOAD;
	temp = 47;
	WriteDAC(0, 0, temp);
	WriteDAC(1, 0, temp * 2);
	WriteDAC(2, 0, temp * 3);
	WriteDAC(3, 0, temp * 4);


	AdcRegs.ADCTRL2.all = 0x2000;

	for (i = 0; i < AVG; i++)
	{
		while (AdcRegs.ADCST.bit.INT_SEQ1 == 0) {}
		AdcRegs.ADCST.bit.INT_SEQ1_CLR = 1;
		SampleTable[i] = ((AdcRegs.ADCRESULT0 >> 4));

	}
	for (i = 0; i < AVG; i++)
	{
		Sum += SampleTable[i];
		Sum = Sum / 2;

	}
	Vin = (float)(Sum * 3) / 4096;

	delay(1500);
}
void WriteDAC(unsigned char add, unsigned char rng, unsigned char vol)
{
	unsigned short int data;
	data = 0x0000;
	data = ((add << 14) | (rng << 13) | (vol << 5));
	while (SpiaRegs.SPISTS.bit.BUFFULL_FLAG == 1);
	SpiaRegs.SPITXBUF = data;
	while (SpiaRegs.SPISTS.bit.BUFFULL_FLAG == 1);
	delay(1500);
	ClrLOAD;
	delay(150);
	SetLOAD;
	delay(1500);
}
void delay(unsigned int t)
{
	while (t > 0)
		t--;
}
void spi_init()
{
	SpiaRegs.SPICCR.all = 0x0a;
	SpiaRegs.SPICTL.all = 0x0006;
	SpiaRegs.SPIBRR = 0x0031;
	SpiaRegs.SPICCR.all = 0x8a;
	SpiaRegs.SPIPRI.bit.FREE = 1;
}
