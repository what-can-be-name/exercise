#include <stdio.h>

int main()
{
	int hour1, minute1;
	printf("ʱ��������\n�������һ��ʱ��\n��3 50\n��ʾ������ʮ��\n");
	scanf("%d %d", &hour1, &minute1);
	
	int hour2, minute2;
    printf("������ڶ���ʱ��\n");
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2-t1;

	printf("ʱ�����%dСʱ%d�֡�", t/60, t%60);
	
	return 0;
}
