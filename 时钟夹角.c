#include <stdio.h>
int main()
{
	int hour,min;
	double d;
	scanf("%d %d",&hour,&min);
	if(min/5>hour)
	{
		d=min*6-(hour*30+min*0.5);
	}
	else
	{
		d=(hour*30+min*0.5)-min*6;
	}
	if(d==360.0)
	{
		d=0.0;
	}
	if(d>180.0)
	{
		d=360.0-d;
	}
	printf("At %d:%02d the angle is %.1f degrees.",hour,min,d);
	
	return 0;
} 
