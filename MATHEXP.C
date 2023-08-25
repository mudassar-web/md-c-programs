#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int v,c,d,g;
float r;
clrscr();
printf("ENTER FOUR VALUES:");
scanf("%d%d%d%d",&v,&c,&d,&g);
r=(2*v)+6.22*(c+d)/(g+v);
printf("THE ANSWER=%f",r);
printf("\nAbs=%d",abs(-5));
printf("\nsin=%f",sin(90));
printf("\nsqrt=%f",sqrt(144));
getch();
}