#include <stdio.h>
int main()
{
	int a,b,c,count;
	scanf("%d/%d",&a,&b);
	int d=a/b;
	if(d!=0){
		printf("%d.",d);
		a=c=a%b;
		d=c/b;
	}else{
		printf("0.");
	}
	while(count<200){	
		a*=10;
		d=a/b;
		printf("%d",d);
		a=c=a%b;
		d=c/b;
		count++;
		if(a==0){
			break;
		}
	}
	printf("\n");
	return 0;
}

