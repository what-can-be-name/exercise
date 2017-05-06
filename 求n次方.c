#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;

	scanf("%lf %lf",&a,&b);
	c=pow(a,b);
	unsigned int d=c;
	d%=1000;
	if(d!=0&&d>100)
	{
		printf("The last 3 numbers is %d.\n",d);
	}
	else
	{
		printf("The last 3 numbers is %03d.\n",d);
	}

	
	return 0;
}
