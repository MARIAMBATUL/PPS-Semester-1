#include<stdio.h>
void main()
{
int Z[5],i,p=1;
printf("Enter five values\n");
for(i=0;i<5;i++)
scanf("%d",&Z[i]);
for(i=0;i<5;i++)
{
p=p*Z[i];
}
printf("product=%d",p);
}
