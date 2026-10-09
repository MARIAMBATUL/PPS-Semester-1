//program to print odd number from 1 to n
#include<stdio.h>
void main()
{
int j,n;
j=1;
n=15;
while(j<=n)
{
if(j%2!=0)
{
printf("%d\n",j);
}
j=j+2;
}
}
