#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int c=a,d=b;
	while ( d!=0 )
	{
		int temp=c%d;
		c=d;
		d=temp;
	}
	
	printf("%d/%d",a/c,b/c);
	
	return 0;
}
