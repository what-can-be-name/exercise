#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int u2b(int utc);

int main()
{
	int checksum=0,i,utc,bjt;
	char string[100],*p=NULL,*q=string;
	do
	{
		gets(string);
		if ( (p=strstr(string,"END")) )
		{
			break;
		}
		if ( strstr(string,"$GPRMC") )
		{
			for (i=0;i<=1;i++)
			{
				q=strchr(q,',');
			}
			if (strchr(q,'A'))
			{
				for (i=1;string[i]!='*' && string[i+1]!='*';i++)
				{
					checksum=string[i]^string[i+1];
				}
				checksum%=65536;
				if(atoi(&string[i+1])==checksum)
				{
					q=strchr(q,',');
					utc=atoi(q);
					bjt=u2b(utc);
				}
			}
			
		}
	}while(!p);
	
	printf("%02d:%02d:%02d",bjt/10000,bjt/100%100,bjt%100);
	
	return 0;
}

int u2b(int utc)
{
	int bjt;
	bjt=utc+80000;
	if(bjt>=240000)
	{
		bjt-=240000;
	}
	return bjt;
}
