#include<stdio.h>
#include<conio.h>
int even(int);
void main()
{
int i,e;
clrscr();
printf("\nEVEN NUMBERS BETWEEN 1-25 ARE:");
for(i=1;i<=25;i++)
{
e=even(i);
if(e!=0)
	printf("\n%d",e);
}
getch();
}
int even(int n)
{
if(n%2==0)
 return n;
return 0;
}
