#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={11,12,13,14,15};
int *p;
int i;
clrscr();
p=a;
for(i=0;i<=4;i++)
{
printf("\na[%d]=%d",i,a[i]);
}
printf("\n----------");
for(i=0;i<=4;i++)
{
//printf("\na[%d]=%d",i,*(p+i));
printf("\n*(p+%d)=%d",i,*(p+i));
}
getch();
}