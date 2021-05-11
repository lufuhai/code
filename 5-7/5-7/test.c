//递归的基本条件：1调用函数本身2.设置了正确的结束条件

//#include<stdio.h>
//int Sum(int num)
//{
//	int result;
//	if (num > 0)
//	{
//		result = num*Sum(num - 1);
//		return result;
//	}
//	else
//		return result = 1;
//}
//int main()
//{
//	int result;
//	result = Sum(5);
//	printf("%d\n", result);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int result;
//	for (result = 1; i < 6; i++)
//	{
//		result *= i;
//	}
//	printf("%d\n", result);
//	return 0;
//}


//#include<stdio.h>
//int Sum(int num)
//{
//	int result;
//	for (result = 1; num > 1; num--)
//	{
//		result = result*num;
//	}
//	return result;
//}
//int main()
//{
//	int result;
//	result = Sum(5);
//	printf("%d\n", result);
//	return 0;
//}


//#include<stdio.h>
//int recursion()
//{
//	printf("hello\n");
//	static count = 10;
//	if (--count)
//	{
//		recursion();
//	}
//}
//int main()
//{
//	recursion();
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i=1;
	int result=1;
	for (i = 1; i < 6; i++)
	{
		result *= i;
	}
	printf("1-5的和为%d\n", result);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int recursion()
//{
//	printf("hello\n");
//	static count = 10;
//	if (--count)
//	{
//		recursion();
//	}
//}
//int main()
//{
//	recursion();
//	return 0;
//}
//#include<stdio.h>
//int Sum(int num)
//{
//	int result;
//	if (num > 0)
//	{
//		result = num*Sum(num - 1);
//		return result;
//	}
//	else
//		return result = 1;
//}
//int main()
//{
//	int result;
//	result = Sum(5);
//	printf("%d\n", result);
//	return 0;
//}

