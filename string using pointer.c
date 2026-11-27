#include<stdio.h>
void main()
{
char str[20]="greeks";
char *ptr=str;
while(*ptr!='\0')
{
printf("%c",*ptr);
ptr++;
}
}
