#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[3][4] = { { 1, 2 }, { 3, 6 }, { 4, 9 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j=0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}