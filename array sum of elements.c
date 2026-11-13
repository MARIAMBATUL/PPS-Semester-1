#include<stdio.h>
void main()
{
int M[5],i,s=0;
printf("Enter five values\n");
for(i=0;i<5;i++)
scanf("%d",&M[i]);
for(i=0;i<5;i++)
{
s=s+M[i];
}
printf("sum=%d",s);
}
