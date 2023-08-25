#include<stdio.h>
#include<conio.h>
int m;
void check(int a,int b,int c,int d)
{
	printf("\nAutomatic=%d",a);
	printf("\nRegister=%d",b);
	printf("\nStatic=%d",c);
	printf("\nExternal=%d",d);
	a=9;
}

void main()
{
	auto int i;
	register int j;
	static int k=786;
	//extern int m;
	clrscr();
	printf("\nAutomatic=%d",i);
	printf("\nRegister=%d",j);
	printf("\nStatic=%d",k);
	printf("\nExternal=%d",m);
	i=8;
	check(i,j,k,m);
	printf("\nAutomatic after function=%d",i);
	printf("\nstatic after function=%d",k);
	getch();
}