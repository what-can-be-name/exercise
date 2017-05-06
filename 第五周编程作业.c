#include <stdio.h>
int isprime(int num);
void primefactors(int m,int num);

int main()
{
	int num;
	scanf("%d",&num);
	int m=isprime(num);
	if(m==1)
	{
		printf("%d=%d",num,num);
	}
	primefactors(m,num);
	
	return 0;
}

int isprime(int num)
{
	int m,i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			m=0;
			printf("%d=",num);
			break;
		}
			if(i==num-1)
			{
				m=1;
			}
	}	
	if(num==2)
	{
		m=1;
	}
	return m;
}

void primefactors(int m,int num)
{
	int chushu;
	for(chushu=2;m==0&&num!=1;chushu++)
	{
		while(num%chushu==0)
		{
			printf("%d",chushu);
			num/=chushu;
			if(num!=1)
			{
				printf("x");
			}
		}
	}
}
