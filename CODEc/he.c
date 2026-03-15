#include <stdio.h>
#include <stdlib.h>
int add(int x, int y)//调用函数写主函数前main  主函数只能有一个
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//int sum=num1=num2;
	//函数的方式
	int sum = add(num1, num2);
	printf("%d\n", sum);//求和
    system("pause");
	return 0;
}