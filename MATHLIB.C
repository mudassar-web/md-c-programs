#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double b;
int a;
char c;
clrscr();
printf("\nENTER INTEGER:");
scanf("%d",&a);
printf("\nABSOLUTE VALUE=%d",abs(a));
b=pow(a,2);
printf("\npower=%lf",b);
printf("\nENTER CHARACTER:");
scanf("%c",&c);
printf("\nASCII value of %c=%d",c,(int)c);
printf("\nENTER A CHAR=");
c=getch();
printf("\nGET=%c",c);
getche();
getch();
}