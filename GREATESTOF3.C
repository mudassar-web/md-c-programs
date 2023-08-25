#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z;
 clrscr();
 printf("ENTER THREE VARIABLES \n");
 scanf("%d%d%d",&x,&y,&z);
 if(x>y && x>z)
   printf("%d is greatest \n",x);
 else if(y>x && y>z)
   printf("%d is greatest \n",y);
 else
    printf("%d is greatest \n",z);
 getch();

}