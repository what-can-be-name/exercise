#include <stdio.h>
int fun(int x);
int main()
{
	int i,n,m,count=0;
	scanf("%d %d",&n,&m);
	for ( i=n; i<=m; i++)
	{
		if ( fun(i) )
		{
			if ( count == 0 )
			{
				printf("%d",i);
				count++;
			}
			else
			{
				printf(" %d",i);
			}
			
		}
		if ( i==m && count==0 )
		{
			printf("NIL");
		}
	}
	printf("\n");
	
	return 0;	
} 

int fun(int x)
{
	int i,ret=0,total=0;
	for ( i=1; i<x; i++ )
	{
		if( x%i==0 )
		{
			total+=i;
		}
	}
	if( x==total )
	{
		ret=1;
	}
	return ret;
}
