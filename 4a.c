#include<stdio.h>
void main()
{
int n,oct=0,rem,i=1;
printf("enter decimal number");
scanf("%d",&n);
while(n!=0)
{
rem=n%8;
oct=oct+rem*i;
n=n/8;
i=i*10;
}
printf("oct=%d",oct);
}
