#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a,b,c,d,e;
    printf("ENTER ANY FIVE NUMBERS \n");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e );
    float avg= (a+b+c+d+e)/5;
    printf("The average =%f ",avg );
    getch();
}