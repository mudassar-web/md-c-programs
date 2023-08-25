#include<stdio.h>
#include<conio.h>
void main()
{
    int x,abs;
    clrscr();
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&x);
    abs= x>0?x:(x*(-1));
    printf("\nVALUE=%d",abs);
    getch();
}