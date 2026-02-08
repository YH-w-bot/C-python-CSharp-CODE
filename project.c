#include <stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP (65001);
    SetConsoleCP(65001);
    
    printf("hello world\n");
    printf("你好世界\n");
    return 0;
}