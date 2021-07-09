#include<stdio.h>
int main()
{
	int a;
	a = sizeof(long);
	printf("%d\n", a);
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//打印奇数位
//	for (i = 30; i >= 0; i -=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//打印偶数位
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int temp = m^n;
//	int count = 0;
//	while (temp)
//	{
//		temp = temp&(temp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}





//#include<stdio.h>
//int NumberOf1(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}




//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int ret = NumberOf1(num);
//	printf("%d\n", ret);
//
//	return 0;
//}