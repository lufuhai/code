#include<stdio.h>
void QuickSort(int arr[], int l, int r)
{
	if (l < r)
	{
		//Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
		int i = l, j = r, x = arr[l];
		while (i < j)
		{
			while (i < j && arr[j] >= x) // 从右向左找第一个小于x的数
				j--;
			if (i < j)
				arr[i++] = arr[j];

			while (i < j && arr[i] < x) // 从左向右找第一个大于等于x的数
				i++;
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = x;
		QuickSort(arr, l, i - 1); // 递归调用 
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

//#include<stdio.h> //插入排序
//void InsertSort(int arr[], int len)
//{
//	if (len < 2)
//	{
//		return 0;
//	}
//	for (int i = 1; i < len; i++)
//	{
//		int k = arr[i];  //k暂存需要插入的元素
//		int j = i - 1;
//		for (j = i - 1; j >= 0 && k < arr[j]; j--)
//		{
//			arr[j + 1] = arr[j]; //将插入的值与有序序列最右边的值比较
//		}
//		arr[j + 1] = k; //拿出的数字大于最右侧数字，拿出的数字插在有序序列的最右侧
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
//#include<stdio.h>  //选择排序
//void SelectSort(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int k = i;  //指向最小坐标
//		for (int j = i + 1; j < len; j++)//找最小值的坐标
//		{
//			if (arr[k]>arr[j])//如果当前值大于后一个值k则指向新下表
//			{
//				k = j;
//			}
//		}
//		if (k != i)//如果不等于当前下表交换位置
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
//void BubbleSort(int arr[], int len)//冒泡排序
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
//void InsertSort(int *arr, int len)//选择排序
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