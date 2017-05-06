#include <stdio.h>
int main()
{
	int m,n,total=0;
	scanf("%d",&n);
	for(m=1;total<n;m++)
	{
		total+=m;
	}
	m-=1;
	printf("%d\n",m);
	return 0;
} 
