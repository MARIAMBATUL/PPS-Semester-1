#include<stdio.h>
void main()
{
int A[5],i,min;
printf("Enter five values\n");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
min=A[0];
for(i=0;i<5;i++)
{
if(A[i]<min)
{
min=A[i];
}
}
printf("min=%d",min);
}
