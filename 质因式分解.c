#include <stdio.h>
int main()
{
	int num,i,a[100]={0},count=0,total=0;
	scanf("%d",&num);
	for(i=2;num>1;i++)
	{
		if(num%i==0)
		{
			num/=i;
			a[count]=i;
			count++;
			while(num%i==0)
			{
				num/=i;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		if(i==0)
		{
			total=a[i];
		}
		else
		{
			total*=a[i];
		}
	}
	printf("%d\n",total);
	return 0;
}
