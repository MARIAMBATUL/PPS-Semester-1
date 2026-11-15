#include<stdio.h>
void main()
{
int X[5],i,key,status=0;
printf("Enter five values\n");
for(i=0;i<5;i++)
scanf("%d",&X[i]);
printf("Enter key value\n");
scanf("%d",&key);
for(i=0;i<5;i++)
{
if(key==X[i])
{
status=1;
break;
}
}
if(status==1)
printf("Element found at %d",i+1);
else
printf("Element not found");
}












