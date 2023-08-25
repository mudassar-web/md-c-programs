#include<stdio.h>
#include<conio.h>
void main()
{
int a;
double b;
int *a1;
double *b1;
float f;
float *f1;
clrscr();
printf("\nENTER AN INTEGER VALUE:");
scanf("%d",&a);
printf("\nENTER A DOUBLE:");
scanf("%Lf",&b);
printf("\nENTER A FLOAT=");
scanf("%f",&f);
a1=&a;
b1=&b;
f1=&f;
printf("\nVALUE OF INTEGER=%d",*a1);
printf("\nVALUE OF DOUBLE=%Lf",*b1);
printf("\nVALUE OF FLOAT=%f",*f1);
printf("\nADDRESS OF INTEGER=%u",a1);
printf("\nADDRESS OF DOUBLE=%u",b1);
printf("\nADDRESS OF FLOAT=%u",f1);
getch();
}