#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
do
{
    if(i%2==0)
    {
        printf("%d\n",i);
    }
    i++;
 }while(i<=10);
 getch();
}