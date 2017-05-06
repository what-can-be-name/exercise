#include <stdio.h>
#include <math.h>
int main()
{
	long int i;
	scanf("%ld",&i);
	
	int num,j,total=0,choose;
	for(j=1;i!=0;j++)
	{
		num=i%10;
		if(j%2==0)
		{
			if(num%2==0)
			{
				choose=1;
			}
			else
			{
				choose=0;
			}
		}
		else
		{
			if(num%2!=0)
			{
				choose=1;
			}
			else
			{
				choose=0;
			}
		}
		total+=choose*pow(2,j-1);
		i/=10;
	}
	
	printf("%d",total);
	
	return 0;
}
