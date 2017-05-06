#include <stdio.h>
int check(int a[],int len,int find);
int main()
{
	int a[10],i,find;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&find);
	if(check(a,sizeof(a)/sizeof(a[0]),find))
	{
		printf("%d\n",find);
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
}

int check(int a[],int len,int find)
{
	int i,ret=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==find)
		{
			ret=1;
			break;
		}
	}
	return ret;
}
