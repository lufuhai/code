#include<stdio.h>
int main()
{
	printf("   **   \n");
	printf("   **   \n");
	printf("************\n");
	printf("************\n");
	printf("  * *   \n");
	printf("  * *   \n");
	return 0;
}


//#include<stdio.h>
//long long Fibonacci(size_t N)
//{
//	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
//}
//int main()
//{
//	printf("%d\n", Fibonacci(40));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int sum=0, i, j;
//	for (i = 1; i < 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, n, j;
//	char a[20],t;
//	printf("请输入字符串\n");
//	gets(a);
//	
//	n = strlen(a);
//	for (j= 0; j < n-1;j++)
//	for (i= 0; i< n-j-1; i++)
//	if (a[i]>a[i+1])
//	{
//		t = a[i];
//		a[i] = a[i+1];
//		a[i+1] = t;
//	}
//	printf("%s\n", a);
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <assert.h>
//
//char* My_Strstr(const char* str1, const char* str2)
//{
//	char *cp = (char*)str1;
//	char *substr = (char*)str2;
//	char *s1 = NULL;
//	assert(*str1 != NULL);
//	assert(*str2 != NULL);
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	while (*str2)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && *s1 == *substr)
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return 0;
//}






//void * memcpy(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//	/*
//	* copy from lower addresses to higher addresses
//	*/
//	while (count--) {
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//
//	return(ret);
//}






//int removeDuplicates(int* nums, int numsSize){
//	if (nums == NULL) {
//		return 0;
//	}
//	if ((numsSize == 1) || (numsSize == 0)) {
//		return numsSize;
//	}
//	int retVal = 1;
//	int i;
//	int index = 0;
//	for (i = 1; i < numsSize; i++) {
//		if (nums[index] != nums[i]) {
//			retVal++;
//			index++;
//			nums[index] = nums[i];
//		}
//	}
//	return retVal;
//}
//
//
//
//int removeDuplicates(int* nums, int numsSize){
//	if (nums == NULL){
//		return 0;
//	}
//	if ((numsSize == 1) || (numsSize == 0)){
//		return numsSize;
//	}
//	int retval = 1;
//	int i, j, k;
//	for (i = 0; i < numsSize; i++){
//		for (j = i + 1; j < numsSize; j++){
//			retval++;
//			for (k = i + 1; k < j + 1; k++){
//				nums[k] = nums[j];
//			}
//			break;
//		}
//	}
//	return retval;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 127+1;
//	printf("%d\n", ch);
//	return 0;
//}


//#include<stdio.h>
//void main()
//{
//	for (unsigned char i = 0; i < 256; i++)  //此循环为无限循环，无符号的char的范围永远小于256
//	{
//		printf("Hello C\n");               //将256改为255最终循环255此
//		printf("%d\n", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 4;
//	printf("a=%d\n", a);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//	printf("%d\n", sizeof(bool));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long long));
//	return 0;
//}