#include <stdio.h>
int main()
{
	int i,total;
	scanf("%d",&i);
	while(i>=10)
	{
		total+=i%10;
		i/=10;
	}
	total+=i;
	printf("%d\n",total);
	
	return 0;
}
