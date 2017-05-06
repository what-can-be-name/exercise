#include <stdio.h>
int main()
{
	int a,b,c,n,count;
	scanf("%d",&n);
	for(c = 1;c <= n;c++)
   {
    	for(a = 1; a < c; a++ )
        {
   	    	for(b = 1; b < c; b++)
   	        {
   		       	if((c*c == a*a +b*b)&&(a <= b))
				{
					count++;
				} 
				  
   	        }
        }
   }

	printf("%d\n",count);
	
	return 0;
} 
