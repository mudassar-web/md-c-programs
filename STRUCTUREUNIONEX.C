#include<stdio.h>
#include<conio.h>
struct emp
{
int a;
char ch;
float s;
};
union emp1
{
int a;
char ch;
//float s;
};
int main()
{
struct emp e;
union emp1 e1;//{23,'q',89.897};
clrscr();
e1.a=23;
e1.ch='q';
//e1.s=89.908;
printf("%u %u %u\n",&e.a,&e.ch,&e.s);
printf("\nSIZE of structure=%d bytes",sizeof(e));
printf("\nSIZE of Union=%d bytes",sizeof(e1));
printf("\nUnion:");
printf("\n%d",e1.a);
printf("\n%c",e1.ch);
getch();
return 0;
}