#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
ACCEPT:
printf("\nENTER ANY NUMBER:");
scanf("%d",&a);
if(a<0)
{
printf("\nENTER POSITIVE NUMBER");
goto ACCEPT;
}
else
{
goto work;
}
work:
printf("\n DOUBLE OF A=%d",(2*a));
getch();
}