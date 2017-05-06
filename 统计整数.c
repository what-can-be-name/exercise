#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char a[1000];
	gets(a);
	int i,count=0,num[1000];
	for(i=0;a[i];i++)
	{
		if(isdigit(a[i]))
		{
			num[count]=atoi(&a[i]);
			count++;
			while(isdigit(a[i]))
			{
				i++;
			}
			i--;
		}
	}
	printf("%d\n",count);
	for(i=0;i<count;i++)
	{
		printf("%d\n",num[i]);
	}
	
	return 0;
}
