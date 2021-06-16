#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int i = 1;
	int sum1 = 1;
	int sum2 = 0;
	for (i = 1; i <=5; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			//sum1 = 1;
			sum1 = j * sum1;
		}
		sum2 = sum2 + sum1;
		sum1 = 1;
	}
	printf("%d ", sum2);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = i * sum;
//	}
//	printf("%d ", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i=1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}