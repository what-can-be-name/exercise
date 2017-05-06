#include <stdio.h> 
//#include <file.h>
int main()
{ 
/* FILE *fp; fp=fopen("C:\\1.txt","r"); */ 
char ch; 
int wordnum[10]={0}; 
int i,isword=0,wordsize=0; 
int wordcount=0; 
//ch=fgetc(fp);
 ch=getchar(); 
while(1){ 
//printf("%c",ch); 
if(ch==' '||ch=='\t'||ch=='\n'||ch==','||ch=='.'||ch=='?'||ch=='('||ch==')'||ch=='\"'||ch==':'||ch==EOF||ch==26)
{ 
	if(isword==1)
	{ 
		if(wordsize<=10) 
		wordnum[wordsize-1]=wordnum[wordsize-1]+1; wordsize=0; 
	} 
	isword=0; 
	if(ch==26)
	{
		break;
	}
}
else
{ 
	if(isword==0) 
		wordcount++; 
	isword=1; 
	wordsize++; 
} 
if(ch!=EOF)
{ 
//ch=fgetc(fp);
ch=getchar(); 
} 
else
{ 
 break;
} 
} 
printf("%d",wordcount); 
for(i=0;i<10;i++)
{ 
printf(" %d",wordnum[i]); 
} 
return 0;}
