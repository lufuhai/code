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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:		
//			printf("�������\n");
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
//		printf("δ����\n");
//	}
//	else if (age > 18 && age < 50)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
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
//		printf("�������");
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//	case 5
//	:printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//			//printf("�����Ϊ����");
//			printf("%d\t", num);
//		}
//		//else
//		//{
//		//	//printf("�����Ϊż��");
//		//}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age = 5) // һ���Ⱥ�Ϊ��ֵage=5Ϊ���������
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
//	printf("������������䣺");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("�ѳ���\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//struct Book  //����һ���������
//{
//	char name[30];
//	double price;
//	char id[30];
//};
////�ṹ�����.��Ա��
////�ṹ��ָ��->��Ա��
////��������д����ȫ�ȼ�
//
//
//int main()
//{
//	//����һ����
//	struct Book b1 = { "<<���ݽṹ>>",55.62,"ID123456789" };
//	struct Book b2 = { "<<C����>>",37.45,"ID4512689" };
//	//����һ���ṹ��֬��
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