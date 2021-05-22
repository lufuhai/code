#include"DSP2833x_Device.h"
#include"DSP2833x_Examples.h"

#define uchar unsigned char

#define LCD_RS GpioDataRegs.GPADAT.bit.GPIO0
#define LCD_EN GpioDataRegs.GPADAT.bit.GPIO1
#define LCD_DB GpioDataRegs.GPADAT.all

void Init_Port(void);
void LCD_init(void);
void LCD_write_command(uchar command);
void LCD_write_data(uchar dat);
void main(void)
{
	uchar i;

	InitSysCtrl();

	Init_Port();

	DINT;

	InitPieCtrl();

	IER = 0X0000;
	IFR = 0X0000;

	InitPieVectTable();

	for (;;)
	{
		LCD_init();
		LCD_write_command(0x80);


		LCD_write_data(0xB5);//电
		LCD_write_data(0xE7);
		LCD_write_data(0xD7);//字
		LCD_write_data(0xD3);
		LCD_write_data(0xD0);//信
		LCD_write_data(0xC5);
		LCD_write_data(0xCf);//息
		LCD_write_data(0xA2);
		LCD_write_data(0xD1);//学
		LCD_write_data(0xA7);
		LCD_write_data(0xD4);//院
		LCD_write_data(0xBa);

		姓名学号这里自己写的，和上面的差不多。


			DELAY_US(100);

		while (1);
	}
}

void Init_Port(void)
{
	EALLOW;

	GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;
	GpioCtrlRegs.GPAPUD.bit.GPIO1 = 1;

	GpioCtrlRegs.GPAMUX1.all = 0x000000;

	GpioCtrlRegs.GPADIR.all = 0x00FFF;
	GpioCtrlRegs.GPAQSEL1.all = 0x0000;
	GpioDataRegs.GPADAT.bit.GPIO0 = 1;
	GpioDataRegs.GPADAT.bit.GPIO1 = 0;
	EDIS;
}

void LCD_write_command(uchar command)
{
	LCD_RS = 0;
	LCD_EN = 1;
	LCD_DB = (command << 2) | 0x0002;
	DELAY_US(10000);
	LCD_EN = 0;
	DELAY_US(100);
}

void LCD_write_data(uchar dat)
{
	LCD_RS = 1;
	LCD_EN = 1;
	LCD_DB = (dat << 2) | 0x0003;
	DELAY_US(10000);
	LCD_EN = 0;
	DELAY_US(100);
}

void LCD_init(void)
{
	DELAY_US(100000);
	LCD_write_command(0x30);

	DELAY_US(200);
	LCD_write_command(0x30);
	DELAY_US(200);
	LCD_write_command(0x0c);
	DELAY_US(200);
	LCD_write_command(0x01);
	DELAY_US(12000);
	LCD_write_command(0x06);
	DELAY_US(500);
}