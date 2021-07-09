#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int count = 0;
	char str[50] = "hard hard study and day day up";
	char  *p = str;
	while (*p !='\0')
	{
		if (*p == ' ')
			count++;
		p++;
	}
	printf("%d\n", count);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int grade;
//	scanf("%d", &grade);
//	switch (grade / 10)
//	{
//	case 9:
//	case 10:
//		printf("A");
//		break;
//	case 8:
//		printf("B");
//		break;
//	case 7:
//		printf("C");
//		break;
//	case 6:
//		printf("D");
//		break;
//	default:
//		printf("E");
//		break;
//	}
//	return 0;
//}