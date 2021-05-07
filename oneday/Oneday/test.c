#include<stdio.h>
int main()
{
	int x, y, z,t;
	printf("请输入三个数：");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		t = x; x = y; y = t;
	}
	if (x > z)
	{
		t = x; x = z; z = t;
	}
	if (y > z)
	{
		t = y; y = z; z = t;
	}
	printf("%d %d %d\n", x, y, z);
	return 0;
}



//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	long int i, x, y, z;
//	for (i = 0; i < 10000000; i++)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 168);
//		if ((x*x == i + 100) && (y*y == i + 168))
//			printf("%d\n", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	for (j = 1; j < 5;j++)
//	for (k = 1; k < 5; k++)
//	{
//		if (i != k&i != j&j != k)
//			printf("%d%d%d\n", i, j, k);
//	}
//	//getch();
//	//printf("%d%d%d", i, j, k);
//	return 0;
//}






//#include<stdio.h>    //函数写在主函数的后面，函数要在主函数前申明
//int Add(int a, int b);
//int main()
//{
//	int sum = (32, 34);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}

//#include<stdio.h>   //函数正常写法
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 43;
//	int b = 78;
//	int sum;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b,sum;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &a, &b);
//	//a = 32;
//	//b = 33;
//	sum = a + b;
//	printf("两个数的和为sum=%d", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("hello\n");
//	return 0;
//}