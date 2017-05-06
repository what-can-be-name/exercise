#include <stdio.h>
#include <math.h>
int main()
{
	long int i;
	scanf("%ld",&i);
	int j,k,count=1;
	
	if(i<0)
	{
		printf("fu ");
		i=-i;
	}
		
	k=i;
	while(i>=10)
	{
		i/=10;
		count++;	
	}
	int a[count];
	
	for(j=count-1;j>=0;j--)
	{
		a[j]=k%10;
		k/=10;
	}
	
	for(j=0;j<count;j++)
	{
		switch(a[j])
		{
			case 0:
			printf("ling");
			break;
			
			case 1:
			printf("yi");
			break;
			
			case 2:
			printf("er");
			break;
			
			case 3:
			printf("san");
			break;
			
			case 4:
			printf("si");
			break;
			
			case 5:
			printf("wu");
			break;
			
			case 6:
			printf("liu");
			break;
			
			case 7:
			printf("qi");
			break;
			
			case 8:
			printf("ba");
			break;
			
			case 9:
			printf("jiu");
		}
		if(j!=count-1)
		{
			printf(" ");
		}
	}
	
	return 0;
}
