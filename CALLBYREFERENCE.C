#include<stdio.h>
#include<conio.h>
void display(int x,int y)
{
printf("x=%d y=%d\n",x,y);
}
void display1(int *x,int *y)
{
printf("x=%d y=%d\n",*x,*y);
*x=91;
*y=27;
}
void main()
{
int a=5,b=6;
clrscr();
display(a,b);
display(7,8);
display1(&a,&b);
printf("a=%d b=%d\n",a,b);
getch();
}