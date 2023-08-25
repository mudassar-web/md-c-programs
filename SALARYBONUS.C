#include<stdio.h>
#include<conio.h>
void main()
{
 int bonus=0,cy,yoj,yos;
 /*cy=current year,
 yoj=year of joining,
 yos=year of service*/
 clrscr();
 printf("ENTER CURRENT YEAR AND YEAR OF JOINING:");
 scanf("%d %d",&cy,&yoj);
 yos=cy-yoj;
 if(yos>3)
	bonus=2500;
 if(yos>5)
	bonus=4000;
 if(yos>10)
	bonus=8000;
 printf("\nFor %d year, bonus is %d ",yos,bonus);
 getch();
}