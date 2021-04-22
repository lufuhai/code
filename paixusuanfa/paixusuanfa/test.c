#include<stdio.h>
void QuickSort(int arr[], int l, int r)
{
	if (l < r)
	{
		//Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
		int i = l, j = r, x = arr[l];
		while (i < j)
		{
			while (i < j && arr[j] >= x) // ���������ҵ�һ��С��x����
				j--;
			if (i < j)
				arr[i++] = arr[j];

			while (i < j && arr[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = x;
		QuickSort(arr, l, i - 1); // �ݹ���� 
		QuickSort(arr, i + 1, r);
	}
}
int main()
{
	int arr[6] = { 8, 4, 5, 3, 1, 9 };
	QuickSort(arr, 1,6);
	for (int i = 0; i < 6;i++)
	printf("%d", arr[i]);
	return 0;
}

//#include<stdio.h> //��������
//void InsertSort(int arr[], int len)
//{
//	if (len < 2)
//	{
//		return 0;
//	}
//	for (int i = 1; i < len; i++)
//	{
//		int k = arr[i];  //k�ݴ���Ҫ�����Ԫ��
//		int j = i - 1;
//		for (j = i - 1; j >= 0 && k < arr[j]; j--)
//		{
//			arr[j + 1] = arr[j]; //�������ֵ�������������ұߵ�ֵ�Ƚ�
//		}
//		arr[j + 1] = k; //�ó������ִ������Ҳ����֣��ó������ֲ����������е����Ҳ�
//	}                   
//
//}
//int main()
//{
//	int arr[6] = { 8, 4, 5, 3, 1, 9 };
//	InsertSort(arr, 6);
//	for (int i = 0; i < 6;i++)
//	printf("%d", arr[i]);
//	return 0;
//}
//#include<stdio.h>  //ѡ������
//void SelectSort(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int k = i;  //ָ����С����
//		for (int j = i + 1; j < len; j++)//����Сֵ������
//		{
//			if (arr[k]>arr[j])//�����ǰֵ���ں�һ��ֵk��ָ�����±�
//			{
//				k = j;
//			}
//		}
//		if (k != i)//��������ڵ�ǰ�±���λ��
//		{
//			int temp;
//			temp = arr[k];
//			arr[k] = arr[i];
//			arr[i] = temp;
//		}
//	}
//
//}
//int main()
//{
//	int arr[6] = { 8, 4, 5, 3, 1, 9 };
//	SelectSort(arr, 6);
//	for (int i = 0; i < 6;i++)
//	printf("%d", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//void BubbleSort(int arr[], int len)//ð������
//{
//	for (int i = 0; i < len;i++)
//	for (int j = 0; j < len - i-1; j++)
//	{
//		if (arr[j] >= arr[j + 1])
//		{
//			int temp;
//			temp = arr[j];
//			arr[j] = arr[j+1];
//			arr[j+1] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[6] = { 8, 4, 5, 3, 1, 9 };
//	BubbleSort(arr, 6);
//	for (int i = 0; i < 6;i++)
//	printf("%d", arr[i]);
//	return 0;
//}




//#include<stdio.h>
//void InsertSort(int *arr, int len)//ѡ������
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
//int main()
//{
//	int arr1[10] = { 1, 5, 3, 6, 4, 8, 2 };
//	BubbleSort(arr1, 7);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}