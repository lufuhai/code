#include<stdio.h>
#include<assert.h>
int FindChar(char *str, char ch)
{
	assert(*str != NULL);
	char *ptmp = str;
	while (*ptmp != '\0')
	{
		if (*ptmp >= 'A'&&*ptmp <= 'Z')
			*ptmp = *ptmp + 32;
	}
	if (ch >= 'A'&&ch <= 'Z')
	{
		ch = ch + 32;
	}
	int count=0;
	while (*str != '\0')
	{
		if (*str == ch)
			count++;
			str++;
	}
	return count;
}
int main()
{
	char str[10000] = { 0 };
	gets(str);
	char ch;
	scanf("%c", &ch);
	int count = FindChar(str, ch);
	printf("%d", count);
	return 0;
}



//#include<stdio.h>
//#include<assert.h>
//int FindChar(char *str, char ch)
//{
//	assert(str != NULL);
//
//	char *temp = str;
//	while (*temp != '\0')
//	{
//		if (*temp >= 'A'&&*temp <= 'Z')
//			*temp = *temp + 32;
//	}
//	if (ch >= 'A'&&ch <= 'Z')
//	{
//		ch = ch + 32;
//	}
//	int count = 0;
//	while (*str != '\0')
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[10000] = {0};
//	gets(str);
//	char ch;
//	scanf("%c", &ch);
//	int count;
//	count = FindChar(str, ch);
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int len;
//	char str[] = "hello world"; //����һ���ַ�����
//	len = strlen(str);//�����ַ����ĳ���
//	printf("�ַ����ĳ���Ϊ��%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char dest[16] = "Hello ";
//	char src[6] = "World";
//	strcat(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char *ret;
//	char str1[40] = "To 1 be 2 or 3 not 4 to 5 be";
//	char str2[10]= "1 2 3 4 5";
//	printf("%s\n", strtok(str1,str2 ));
//	while ((ret = strtok(NULL, str2)))
//		printf("%s\n", ret);
//	return;
//}




//#include<stdio.h>
//int main()
//{
//	char *ret;
//	const char str1[40] = "To be or not to be";
//	const char str2[10] = "or";
//	ret = strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ret;
//	char str1[10] = "ABCD";
//	char str2[10] = "Abcd";
//	ret = strncmp(str1, str2, 2);
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char str1[20] = { 0 };//��ʼ��str1
//	char str2[20] = "To be or not to be";
//	strncpy(str1, str2, 8);//��str2�е�ǰ�˸��ַ�������str1
//	printf("%s\n", str1);
//	return 0;
//}

//
//#include <string.h>
//
//int main(void)
//{
//	char *p = "aBc";
//	char *q = "Abc";
//	char *h = "abc";
//
//	printf("strcmp(p,q):%d\n", strcmp(p, q));
//	printf("strcmp(p,h):%d\n", strcmp(p, h));
//
//	return 0;
//}

//#include<stdio.h>
//int my_strcmp(char const *str1, char const *str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	int ret = 0;
//	while (!(ret = (*str1 - *str2)) && *str1)//�����������Ҳ�Ϊ'\0'
//	{
//		str1++;
//		str2++;
//	}
//	if (ret < 0)
//		ret = -1;
//	else if (ret>0)
//		ret = 1;
//	return ret;
//}


//#include<string.h>
//int main()
//{
//	char *str1 = "aBc";
//	char *str2 = "Abc";
//	char *str3 = "abc";
//	printf("strcmp(str1,str2):%d\n",strcmp(str1, str2));
//	printf("strcmp(str2,str3):%d\n",strcmp(str2, str3));
//	return 0;
//}
//strcmp�ַ����Ƚϣ��Ƚ��ַ���str1��str2�Ƿ���ͬ�������ͬ�򷵻�0��
//�����ͬ���ڲ�ͬ���ַ������str1���ַ�����str2���ַ����򷵻�1�����򷵻� - 1

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	a++;
//	execl("/usr/bin/pwd", "pwd", NULL);
//	printf("%d\n", a++);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}