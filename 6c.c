#include<stdio.h>
int fact(int n);
void main()
{
int f,n;
printf("enter value n");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
}
int fact(int n)
{
if (n==1||n==1)
return 1;
else
return n*fact(n-1);
}
