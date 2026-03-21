#include <stdio.h>
#include <stdlib.h>
int main()
{
    int start_hour, start_minute,
        end_hour,end_minute;
    int start_total,
        end_total,
        diff_total;
    int diff_hour,
        diff_minute;
    printf("请输入开始时间（小时 分钟）：");
    scanf("%d %d", &start_hour, &start_minute); 
    printf("请输入结束时间（小时 分钟）：");
    scanf("%d %d", &end_hour, &end_minute); 
    start_total = start_hour * 60 + start_minute;
    end_total = end_hour * 60 + end_minute;
    diff_total = end_total - start_total;
    diff_hour = diff_total / 60;
    diff_minute = diff_total % 60;
    printf("时间差为：%d小时%d分钟\n", diff_hour, diff_minute);
    system ("pause");
    return 0;
}
