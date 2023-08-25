#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define sqr(x) (x*x)
#define max(x,y) (x>y?x:y)
void main()
{
int r=5,a=5,b=6;
float area;
clrscr();
area= PI*r*r;
printf("\nSQUARE=%d",sqr(a));
printf("\nMAX=%d",max(a,b));
printf("\nAREA=%f",area);
getch();
#undef PI
}