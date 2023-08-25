#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
int percent;
};
void main()
{
struct student s[3];
int i,count;
clrscr();
printf("\nENTER STUDENT DETAILS:");
for(i=0;i<=2;i++)
{
printf("\n-------------------------");
printf("\nENTER YOUR ROLL NUMBER:");
scanf("%d",&s[i].roll);
printf("\nENTER YOUR NAME:");
scanf("%s",s[i].name);
printf("\nENTER YOUR PERCENTAGE:");
scanf("%d",&s[i].percent);
}

printf("\nSTUDENT INFORMATION:");
printf("\nROLL No.\tNAME\tPERCENTAGE:");
for(i=0;i<=2;i++)
{
	printf("\n%d\t%s\t%d",s[i].roll,s[i].name,s[i].percent);
}
count=0;
for(i=0;i<=2;i++)
{
	if(s[i].percent>=70)
	{
		count++;
	}
}
printf("\nAbove 70 percent students=%d",count);

getch();
}