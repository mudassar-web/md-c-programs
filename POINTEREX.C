#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int *p;
	clrscr();
	printf("\nEnter a=");
	scanf("%d",&a);
	p=&a;
	printf("\nValue of a=%d",*p);
	printf("\nAddress of a=%u",p);
	printf("\nNext Address of a=%u",(p+1));
	printf("\nNext Address of a=%u",(p+2));
	*(p+1)=6;
	*(p+2)=*p+*(p+1);
	printf("\nAddition =%d",*(p+2));
	getch();
}