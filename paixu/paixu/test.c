#include<stdio.h>
void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = 0;
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//#include<stdio.h>
//void InsertSort(int *arr, int len)//—°‘Ò≈≈–Ú
//{
//	int key;
//	int i = 0;
//	int begin;
//	for (i = 0; i < len; i++)
//	{
//		int index = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[j] < arr[index])
//			{
//				index = j;
//			}
//		}
//		if (index == i)
//			continue;
//		else
//		{
//			int temp;
//			temp = arr[index];
//			arr[index] = arr[i];
//			arr[i] = temp;
//		}
//	}
//}
int main()
{
	int arr1[10] = { 1, 5, 3, 6, 4, 8, 2 };
	BubbleSort(arr1, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}