#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int* p = &a;
    printf("%d\n", *p);
    system("pause");
    return 0;
}