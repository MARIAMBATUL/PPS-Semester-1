#include<stdio.h>
void main()
{
int A[5],i,max;
printf("Enter five values\n");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
max=A[0];
for(i=0;i<5;i++)
{
if(A[i]>max)
{
max=A[i];
}
}
printf("max=%d",max);
}
