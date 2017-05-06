#include <stdio.h>
#include <string.h>
int main()
{
	char input[1000],find[1000];
	int size=strlen(find);
	gets(input);
	gets(find);
	int count=0;
	int *p=strstr(input,find);
	
	while(p)
	{
		count++;
		p=strstr(p+size,find);
	}
	if(count==0)
	{
		printf("No\n");
	}
	else
	{
		printf("%d\n",count);
	}
	
	return 0;
}
