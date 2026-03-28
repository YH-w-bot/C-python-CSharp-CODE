#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[6] ={5,2,9,8,6,2};
    int i,j,temp;
    for (i=0;i<6-1;i++)
    {
        for (j=0;j<6-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}