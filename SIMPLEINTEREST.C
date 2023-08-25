#include<stdio.h>
#include<conio.h>
void main()
{
int p,n;
float si,r;
clrscr();
printf("ENTER PRINCIPAL, NUMBER OF MONTHS, RATE OF INTEREST=");
scanf("%d%d%f",&p,&n,&r);
si=(p*n*r)/100;
printf("THE SI =%f\n",si);
getch();
}