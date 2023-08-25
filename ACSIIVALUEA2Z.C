#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
for(ch='a';ch<='z';ch++)
{
printf("\n%c=%d",ch,(int)(ch));
}
getch();
}