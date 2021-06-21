#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	while ((ch == getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：");
//	scanf("%s", input);
//	printf("请确认密码(Y/N)");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//}



//#include<stdio.h>  //打印素数优化
//#include<math.h>
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i < 200)
//	{
//		int j = 2;
//		while (j < sqrt(i))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i=i+2;
//	}
//	printf("\n");
//	printf("%d ", count);
//	return 0;
//}


//#include<stdio.h>  //打印素数
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i < 200)
//	{
//		int j = 2;
//		while (j < i)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\n");
//	printf("%d ", count);
//	return 0;
//}