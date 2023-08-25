#include<stdio.h>
#include<conio.h>
void main()
{
 float bs,gs,da,hra;
 clrscr();
 printf("ENTER BASIC SALARY");
 scanf("%f",&bs);
 if(bs<1500)
 {
 hra=bs*10/100;
 da=bs*90/100;
 }
 else
 {
 hra=500;
 da=bs*98/100;
 }
 gs=bs+hra+da;
 printf("GROSS SALARY=Rs%f\n",gs);
 getch();
}