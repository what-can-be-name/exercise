#include<stdio.h> 
int main() 
{ 
int year, n, week, total, day; 
scanf("%d",&year); 
if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
{ 
week = (year + year / 4 + year / 400 - year / 100 - 1) % 7; 
for(n = 0;n < 5; n++) 
{ 
if(n == 0) total = 0; 
if(n == 1 || n == 3) total += 31; 
if(n == 2) total += 29; 
if(n == 4) total += 30; 
} 
} 
else 
{ 
week = (year + year / 4 + year / 400 - year / 100) % 7; 
for(n = 0; n < 5; n++) 
{ 
if(n == 0) total = 0; 
if(n == 1 || n == 3) total += 31; 
if(n == 2) total += 28; 
if(n == 4) total += 30; 
} 
} 
week = (week + total) % 7; 
if (week == 0) week = 7; 
day = 7 - week + 8; 
printf("%d\n",day); 
return 0; 
}

