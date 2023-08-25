#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
while(i<=5)
{
int j=i;
while(j<=5)
{
 printf("* \t") ;
 j++;
 }
 printf("\n");
 i++;
 }
 getch();
}