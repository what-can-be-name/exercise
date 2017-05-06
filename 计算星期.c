#include <stdio.h>
int main()
{
	int year,month,day,wrong,f,y,m,whatday;	

	scanf("%d %d %d",&year,&month,&day);
	if(month==2&&day>28)
	{
		if(((year%4==0&&year%100!=0)||year%400==0)&&day<=29)
		{
			wrong=0;		//wrong=1代表月有错，wrong=2代表日有错，wrong=0代表无错。 
		}
		else
		{
			wrong=2;
		}
	}
	else if(month>12)
	{
		wrong=1;
	}
	else if(month%2==0||month==8)
	{
		if(day>30)
		{
			wrong=2;
		}
		else
		{
			wrong=0;
		}
	}
	else if(month%2!=0)
	{
		if(day>31)
		{
			wrong=2;
		}
		else
		{
			wrong=0;
		}
	}
	switch(wrong)
	{
		case 0:
			f=(14-month)/12;
			y=year-f;
			m=month+12*f-2;
			whatday=(day+y+31*m/12+y/4-y/100+y/400)%7;
			printf("%d\n",whatday);
			break;
		case 1:
			printf("month is error.\n");
			break;
		case 2:
			printf("day is error.\n");
			break;
	}

	return 0;
}
