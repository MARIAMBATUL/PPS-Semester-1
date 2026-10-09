//program to display user authentication
#include<stdio.h>
void main ()
{
int UID,UPWD,SID,SPWD;
SID=123;
SPWD=143;
printf("enter UID");
scanf("%d",&UID);
printf("enter UPWD");
scanf("%d",&UPWD);
if(UID==SID && UPWD==SPWD)
printf("verified ");
else
printf("error");
}
