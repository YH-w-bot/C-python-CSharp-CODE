#include <stdio.h>                                    
#include <stdlib.h>
void test()
{
    int a=1;        //加上static后，a的值不会被销毁，而是一直存在，直到程序结束，结果为2到11
    a++;
    printf("%d ",a);
}
int main()
{
    int i =0;
    while (i<10)
    {
        test ();
        i++;
    }
    system("pause");
    return 0;
}