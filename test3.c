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
//		char src[6] = "hello";//定义一个字符数组
//		strncpy(dest, src,2);    //用strcpy函数将src中的字符拷贝给dest
//		printf("%s\n", dest);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char *dest, char *src)//定义void型的函数没有返回值
//{
//	if (dest == NULL || src == NULL)  //定义两个字符串不为空
//	{
//		return;
//	}
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;       //判断src字符串是否结束，将src中的字符逐一拷贝给dest
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
//	char src[6] = "hello";//定义一个字符数组
//	strcpy(dest, src);    //用strcpy函数将src中的字符拷贝给dest
//	printf("%s\n", dest);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);//断言str不为空指针
//	int count = 0;//计算器
//	while (*str != '\0')
//	{
//		count++;//每识别一个不为'\0'的字符计算器加一
//		str++; //指向下一个字符的地址
//	}
//	return count;
//}
//int main()
//{
//	int len;
//	char str[] = "hello world";
//	len = my_strlen(str);
//	printf("字符串的长度为：%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int len;
//	char str[] = "hello world"; //定义一个字符数组
//	len = strlen(str);//计算字符串的长度
//	printf("字符串的长度为：%d\n", len);
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