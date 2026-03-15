#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr2[] = { 'a','b','c' };//char arr1[] = "abc";
	//printf("%d\n",strlen(arr1));//输出3
	printf("%d\n",strlen (arr2));//输出的是随机的除非在char arr2后面大括号加上/0，char arr2[] = { 'a','b','c','\0'};
    system("pause");
	return 0;//现在是随机输出的
}