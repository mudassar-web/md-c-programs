#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,x,sum=0;
 clrscr();
 while(i<=5)
 {
  printf("\nENTER ANY NUMBER:");
  scanf("%d",&x);
  sum+=x;
  i++;
  }
  printf("\nSUM=%d",sum);
  getch();
  }