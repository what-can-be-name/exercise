#include <stdio.h>

int main()
{
	int hour1, minute1;
	printf("时间差计算器\n请输入第一个时间\n如3 50\n表示三点五十分\n");
	scanf("%d %d", &hour1, &minute1);
	
	int hour2, minute2;
    printf("请输入第二个时间\n");
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2-t1;

	printf("时间差是%d小时%d分。", t/60, t%60);
	
	return 0;
}
