#include <stdio.h>
int main()
{
	int num,size,where;
	scanf("%d",&num);
	int i,j;
	for(i=1,size=where=num;i<=num;i++,size++,where--)
	{
		for(j=1;j<=size;j++)
		{
			if(j==where&&i>1)
			{
				printf("%d",i-1);
			}
			else if(j<size)
			{
				printf(" ");
			}
			else
			{
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
