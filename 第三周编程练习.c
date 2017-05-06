#include <stdio.h>
int main()
{
	int number = 0;
	int jishu = 0;
	int oushu = 0;
	
	while ( scanf("%d", &number) && number != -1 )
	{
		if ( number % 2 == 0 )
		{
			oushu ++;
		}else
		{
			jishu ++;
		}
	}
	
	printf("%d %d",jishu,oushu);
	
	return 0;
} 
