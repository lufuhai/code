#include<stdio.h>
int main()
{
	int num = 0;
		while (num < 10)
		{
			num = num + 1;
			if (num == 5)
				continue;
			printf("%d ", num);
			
		}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int num = 1;
//	while (num <=10)
//	{
//		printf("%d ", num);
//		num = num + 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:		
//			printf("输入错误\n");
//			break;	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num=1;
//	while(num<100)
//	{
//		printf("%d ", num);
//		num = num + 2;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age = 5)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age > 18 && age < 50)
//	{
//		printf("中年");
//	}
//	else
//	{
//		printf("老年");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//			break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int day=0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//	case 5
//	:printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期七");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 1;
//	while (num < 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	//scanf("%d", &num);
//	for (num = 1; num < 101; num++)
//	{
//		if (num % 2 != 0)
//		{
//			//printf("这个数为奇数");
//			printf("%d\t", num);
//		}
//		//else
//		//{
//		//	//printf("这个数为偶数");
//		//}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age = 5) // 一个等号为负值age=5为真所以输出
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int age;
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("已成年\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//struct Book  //创建一个书的类型
//{
//	char name[30];
//	double price;
//	char id[30];
//};
////结构体变量.成员名
////结构体指针->成员名
////上面两种写法完全等价
//
//
//int main()
//{
//	//定义一本书
//	struct Book b1 = { "<<数据结构>>",55.62,"ID123456789" };
//	struct Book b2 = { "<<C语言>>",37.45,"ID4512689" };
//	//创建一个结构体脂针
//	struct Book* ps = &b1;
//	printf("%s\n", b1.name);
//	printf("%s\n", ps->name);
//	printf("%lf\n", b1.price);
//	printf("%s\n", b1.id);
//	printf("%s\n", b2.name);
//	printf("%lf\n", b2.price);
//	printf("%s\n", b2.id);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	printf("%p\n", p);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}