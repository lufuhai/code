#include<stdio.h>
int main()
{
	int i;
	printf("??????һ??????\n");
	scanf("%d", &i);
	return 0;
}


//#include"DSP2833x_Device.h"
//#include"DSP2833x_Examples.h"
//#include"math.h"
//#define PI 3.1415926
//#define SAMPLENUMBER 128
//void InitForFFT();
//void MakeWave();
//int INPUT[SAMPLENUMBER], DATA[SAMPLENUMBER];
//float fWaveR[SAMPLENUMBER], fWaveI[SAMPLENUMBER], w[SAMPLENUMBER];
//float sin_tab[SAMPLENUMBER], cos_tab[SAMPLENUMBER];
//void FFT(float dataR[SAMPLENUMBER], float dataI[SAMPLENUMBER])
//{
//	int x0, x1, x2, x3, x4, x5, x6, xx;
//	int i, j, k, b, p, L;
//	float TR, TI, temp;
//
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		x0 = x1 = x2 = x3 = x4 = x5 = x6 = 0;
//		x0 = i & 0x01; x1 = (i / 2) & 0x01; x2 = (i / 4) & 0x01; x3 = (i / 8) & 0x01; x4 = (i / 16) & 0x01; x5 = (i / 32) & 0x01; x6 = (i / 64) & 0x01;
//		xx = x0 * 64 + x1 * 32 + x2 * 16 + x3 * 8 + x4 * 4 + x5 * 2 + x6;
//		dataI[xx] = dataR[i];
//	}
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		dataR[i] = dataI[i]; dataI[i] = 0;
//	}
//	for (L = 1; L <= 7; L++)
//	{
//		b = 1; i = L - 1;
//		while (i>0)
//		{
//			b = b * 2; i--;
//		}
//		for (j = 0; j <= b - 1; j++)
//		{
//			p = 1; i = 7 - L;
//			while (i>0)
//			{
//				p = p * 2; i--;
//			}
//			p = p*j;
//			for (k = j; k<128; k = k + 2 * b)
//			{
//				TR = dataR[k]; TI = dataI[k]; temp = dataR[k + b];
//				dataR[k] = dataR[k] + dataR[k + b] * cos_tab[p] + dataI[k + b] * sin_tab[p];
//				dataI[k] = dataI[k] - dataR[k + b] * sin_tab[p] + dataI[k + b] * cos_tab[p];
//				dataR[k + b] = TR - dataR[k + b] * cos_tab[p] - dataI[k + b] * sin_tab[p];
//				dataI[k + b] = TI + temp*sin_tab[p] - dataI[k + b] * cos_tab[p];
//			}
//		}
//	}
//	for (i = 0; i<SAMPLENUMBER / 2; i++)
//	{
//		w[i] = sqrt(dataR[i] * dataR[i] + dataI[i] * dataI[i]);
//	}
//}
//main()
//{
//	int i;
//	InitForFFT();
//	MakeWave();
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		fWaveR[i] = INPUT[i];
//		fWaveI[i] = 0.0f;
//		w[i] = 0.0f;
//	}
//	FFT(fWaveR, fWaveI);
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		DATA[i] = w[i];
//	}
//	while (1);
//}
//void InitForFFT()
//{
//	int i;
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		sin_tab[i] = sin(PI * 2 * i / SAMPLENUMBER);
//		cos_tab[i] = cos(PI * 2 * i / SAMPLENUMBER);
//	}
//}
//void MakeWave()
//{
//	int i;
//	for (i = 0; i<SAMPLENUMBER; i++)
//	{
//		INPUT[i] = sin(PI * 2 * i / SAMPLENUMBER * 3) * 1024;
//	}
//}
