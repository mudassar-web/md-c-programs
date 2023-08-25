#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[2][2] ,b[2][2], c[2][2];
clrscr();
printf("\nENTER ELEMENTS OF MATRIX A:");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nENTER 4 ELEMENTS OF MATRIX B:");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}