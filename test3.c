#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL&&src != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret; 
}
#include<stdio.h>
int main()
{
	char dest[16] = "Hello ";
	char src[6] = "World";
	my_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}



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
//		char dest[10]="0" ;
//		char src[6] = "hello";//����һ���ַ�����
//		strncpy(dest, src,2);    //��strcpy������src�е��ַ�������dest
//		printf("%s\n", dest);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char *dest, char *src)//����void�͵ĺ���û�з���ֵ
//{
//	if (dest == NULL || src == NULL)  //���������ַ�����Ϊ��
//	{
//		return;
//	}
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;       //�ж�src�ַ����Ƿ��������src�е��ַ���һ������dest
//
//	}
//	*dest = '\0';
//}
//int main()
//{
//	char src[6] = "hello";
//	char dest[10];
//	my_strcpy(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char dest[10] ;
//	char src[6] = "hello";//����һ���ַ�����
//	strcpy(dest, src);    //��strcpy������src�е��ַ�������dest
//	printf("%s\n", dest);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);//����str��Ϊ��ָ��
//	int count = 0;//������
//	while (*str != '\0')
//	{
//		count++;//ÿʶ��һ����Ϊ'\0'���ַ���������һ
//		str++; //ָ����һ���ַ��ĵ�ַ
//	}
//	return count;
//}
//int main()
//{
//	int len;
//	char str[] = "hello world";
//	len = my_strlen(str);
//	printf("�ַ����ĳ���Ϊ��%d\n", len);
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
//	printf("helloworld\n");
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char *result = dest;
//	while (src != '\0')
//	{
//		*(dest++)= *(src++);
//	}
//	*dest != '\0';
//	//return dest;
//}