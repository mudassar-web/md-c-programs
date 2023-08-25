#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,max,min;
  printf("ENTER ANY TWO NUMBER");
  scanf("%d %d",&a,&b);
  max=a>b?a:b;
  printf("GREATEST NUMBER IS %d \n",max);
  min=a<b?a:b;
  printf("SMALLEST NUMBER IS %d \n",min);
  getch();
}