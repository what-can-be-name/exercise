#include <stdio.h>
void sort(int a[],int len);
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,sizeof(a)/sizeof(a[0]));
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
		if(i!=9)
		{
			printf(",");
		}
	}
	printf("\n");
	return 0;
}

void sort(int a[],int len)
{
	int i,j,k,m;
	for(i=0;i<len-1;i++)
	{
		k=i;
		for(j=i+1;j<len;j++)
		{
			if(a[k]>a[j])
			{
				k=j;
			}
			
		}
		if(k!=i)
		{
			m=a[i];
			a[i]=a[k];
			a[k]=m;
		}
	}
}
