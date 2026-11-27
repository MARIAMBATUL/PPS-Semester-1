#include<stdio.h>
void main()
{
char name[30];
printf("enter name");
fgets(name,sizeof(name),stdin);
printf("name");
puts(name);
}
