#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	//scanf代表输入函数
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);
    system("pause");
	return 0;
}