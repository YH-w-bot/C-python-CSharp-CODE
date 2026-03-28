#include <stdio.h>
#include <stdlib.h>
#define ADD(X,Y) ((X)+(Y))//define 定义一个宏，ADD是宏名，(X,Y)是宏参数，((X)+(Y))是宏体，在编译时会将ADD(2,3)替换为((2)+(3))，结果为5
int main()
{
    printf ("%d\n",4*ADD(2,3));
    system ("pause");
    return 0;
}