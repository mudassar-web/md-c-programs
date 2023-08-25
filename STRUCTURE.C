#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[50];
float percent;
};
void main()
{
struct student s1,s2;
clrscr();
printf("\nENTER STUDENT DETAILS:");
printf("\n-------------------------");
printf("\nENTER YOUR ROLL NUMBER:");
scanf("%d",&s1.roll);
printf("\nENTER YOUR NAME:");
scanf("%s",s1.name);
printf("\nENTER YOUR PERCENTAGE:");
scanf("%f",&s1.percent);
printf("\nENTER YOUR ROLL NUMBER:");
scanf("%d",&s2.roll);
printf("\nENTER YOUR NAME:");
scanf("%s",s2.name);
printf("\nENTER YOUR PERCENTAGE:");
scanf("%f",&s2.percent);
printf("\nSTUDENT INFORMATION:");
printf("\nROLL No.\tNAME\tPERCENTAGE:");
printf("\n%d\ t%s\t%f",s1.roll,s1.name,s1.percent);
printf("\n%d\t%s\t%f",s2.roll,s2.name,s2.percent);
getch();
}