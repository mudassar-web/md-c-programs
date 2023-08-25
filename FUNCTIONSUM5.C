#include<stdio.h>
#include<conio.h>
int sumof5(int,int,int,int,int);
void main()
{
    int a,b,c,d,e;
    clrscr();
    printf("\nENTER ANY FIVE NUMBERS:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("\nSUM=%d",sumof5(a,b,c,d,e));
    printf("\nAVERAGE=%f",(float)(sumof5(a,b,c,d,e))/5);
    getch();
}

int sumof5(int x,int y,int z,int u,int v)
{
    return(x+y+z+u+v);
}