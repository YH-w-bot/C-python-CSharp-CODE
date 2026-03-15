// 数组
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//int a=1;
	//int b=2
	//int c=3;
	//.....
	//数组：一组相同类型的元素的集合
	//10个整形1-10存起来
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };
    //打印数组
    printf("arr[0] = %d\n",arr [0]);//输出第一个整数
    printf("ch[2] = %c\n",ch [2]);//输出第三个字符
    system("pause");
	return 0;
}
