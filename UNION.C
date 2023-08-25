#include<stdio.h>
#include<conio.h>
union a
{
short int i;
char ch[2];
};
int main()
{
union a key;
key.i=512;
clrscr();
printf("key.i=%d\n",key.i);
printf("key.ch[0]=%d\n",key.ch[0]);
printf("key.ch[1]=%d\n",key.ch[1]);
key.ch[0]=50;
printf("key.i=%d\n",key.i);
printf("key.ch[0]=%d\n",key.ch[0]);
printf("key.ch[1]=%d\n",key.ch[1]);
getch();
return 0;
}


