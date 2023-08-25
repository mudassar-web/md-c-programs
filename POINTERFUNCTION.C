#include<stdio.h>
#include<conio.h>
void areaperi(int,float*,float*);
void areaperi1(int,float,float);
void main()
{
int radius;
float area,perimeter;
clrscr();
printf("\nENTER RADIUS OF CIRCLE:");
scanf("%d",&radius);
//areaperi(radius,&area,&perimeter);
areaperi1(radius,area,perimeter);
printf("\nAREA=%f",area);
printf("\nPERIMETER=%f\n",perimeter);
getch();
}
void areaperi(int r,float*a,float*p)
{
*a=3.14*r*r;
*p=2*3.14*r;
}
void areaperi1(int r,float a,float p)
{
a=3.14*r*r;
p=2*3.14*r;
printf("\nAREA=%f",a);
printf("\nPERIMETER=%f\n",p);
}