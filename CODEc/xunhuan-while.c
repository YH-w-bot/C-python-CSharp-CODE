#include <stdio.h>
#include <stdlib.h>
int main()
{
	// int a = 1;
	// int b = 2;
	// int c = 3;
	int arr[10] = { 1,2,3,4,4,6,7,8,9,10 };
	int i =0;
	while (i < 10)//后不加分号
	{
		printf("%d\n", arr[i]);
		i++;
	}
    system("pause");
	return 0;
}