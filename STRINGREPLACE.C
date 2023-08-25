#include<stdio.h>
#include<conio.h>
void display(char []);
void main()
{
   char c[]="hello james";
   clrscr();
   display(c);
   getch();
}
void display(char x[])
{
	printf("\n%s",x);
}