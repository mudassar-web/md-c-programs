#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,c=1;
clrscr();
 while (i<=3)
 {
 int j=1;
 while(j<=3)
 {
 printf("%d \t",c);
 j++;
 c++;
 }
 printf("\n");
 i++;
 }
 getch();
 }