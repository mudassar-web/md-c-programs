#include<stdio.h>
#include<conio.h>
void main()
{
char c[10]={'a','b','c','d','e','f','g','h','i','j'};
int i;
clrscr();
for(i=0;i<=9;i++)
{
printf("\n%c=%d",c[i],(int)c[i]);
}
getch();
}