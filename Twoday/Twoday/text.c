#include<stdio.h>
int main()
{
	int m=1999;
	int n = 2299;
	int tmp = m^n;
	int count=0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	char grade;
//	scanf("%c", &grade);
//	switch (grade)
//	{
//	case'A':printf("����") ;
//	case'B':printf("����");
//	default:printf("�е�");
//
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//
//{
//	int a = 12;
//	int b = 23;
//	printf("%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int Numberof1(int n)
//{
//	int count=0;
//	int i=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)    //λ����
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int num=0;
//	int ret;
//	scanf("%d", &num);
//	ret = Numberof1(num);
//	printf("%d\n", ret);
//	return 0;
//}



//int Numberof1(int unsigned num)//����һ��������ɶ����ƣ���������1�ĸ���
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Numberof1(num);
//	printf("%d\n", ret);
//	return 0;
//}