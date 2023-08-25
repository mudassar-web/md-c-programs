#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5,sum=0;
float per;
clrscr();
printf("\nENTER THE MARKS OF FIVE SUBJECTS OUT OF 100:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=(sum)/5;
printf("\nYOUR TOTAL MARKS ARE %d AND YOUR PERCENTAGE=%f",sum,per);
if(per>=70)
{
printf("\nGRADE O");
}
else if(per>=60 && per<70)
{
printf("\nGRADE A");
}
else if(per>=50 && per<60)
{
printf("\nGRADE B");
}
else if(per>=45 && per<50)
{
printf("\nGRADE C");
}
else if(per>=40 && per<45)
{
printf("\nGRADE D");
}
else if(per>=30 && per<40)
{
printf("\nGRADE E");
}
else
{
printf("\nGRADE F");
}
getch();
}
