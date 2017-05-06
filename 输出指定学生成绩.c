#include <stdio.h>
int main()
{
	int a[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int choose;
	scanf("%d",&choose);
	int total=0;	
	for(int j=0;j<4;j++)
	{
		printf("%d",a[choose-1][j]);
		total+=a[choose-1][j];
		if(j<3)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	double m=total/4.0;
	printf("%g\n",m);
	
	return 0;
} 
