#include<stdio.h>
void main()
{
int A[2][2],B[2][2],c[2][2],i,j;
printf("enter 4 values for A");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&A[i][j]);
printf("enter 4 values for B");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&B[i][j]);
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=0;
for(int k=0;k<2;k++)

c[i][j]=c[i][j]+A[i][j]*B[i][j];
}
}
printf("\nresult is=\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d",c[i][j]);
printf("\n");
}

}
