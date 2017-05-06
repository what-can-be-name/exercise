#include <stdio.h>
int main()
{
	int bjt=0;
	int utc=0;
	scanf("%d",&bjt);
	
	if(bjt>=100)
	{
		utc=bjt-800;
		if(utc<0)
		{
			utc+=2400;
		}	
	}
	else
	{
		utc=1600+bjt;	
	}
	printf("%d",utc);
	
	return 0;
}
