#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
int a[5];
clrscr();
printf("\nENTER 5 NUMBERS:");
for(i=0;i<=1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
sum=sum+a[i];
}
printf("\nSUM OF 5=%d",sum);
getch();
}
