#include<stdio.h>
#include<conio.h>
void main()
{
 int x,i,sum=0;
 clrscr();
 for(i=1;i<=5;i++)
 {
 printf("\nENTER ANY NUMBER:");
 scanf("%d",&x);
 sum+=x;
 }
 printf("\nSUM=%d",sum);
 getch();
 }