#include<stdio.h>
int fib(int n);
void main()
{
int i,n;
printf("enter value n");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d",i);
}
int fib(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return fib(n-1)+fib(n-2);
}
