#include <stdio.h>
#include <stdlib.h>
//define 是一个预处理命令，作用是定义一个宏，宏是一种文本替换工具，在编译时会将宏替换为对应的值或代码片段。
//宏定义的语法格式为：#define 宏名 替换文本
#define MAX 1000
int main()
{
    printf ("%d\n",MAX);
    system ("pause");
    return 0;
}