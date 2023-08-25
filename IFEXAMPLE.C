#include<stdio.h>
#include<conio.h>
void main()
{
int a;
a= 3+2%5;
clrscr();
if(a)
{
 printf("\nVALUE=%d",3+2%5);
 printf("\nTRUE");
 }
 else
 {
 printf("FALSE");
 }

if(a=10)
	printf("\nTHIS WORKS");

if(-5)
	printf("\nTHIS ALSO WORKS");
getch();
}