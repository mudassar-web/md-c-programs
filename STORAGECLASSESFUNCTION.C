#include<stdio.h>
void increment();
void increment1();
int main()
{
clrscr();
increment();
increment();
increment();
printf("\n-------AUTO-----");
increment1();
increment1();
increment1();
return 0;
}
void increment()
{
static int i=1;
printf("%d\n",i);
i=i+1;
}
void increment1()
{
auto int i=1;
printf("%d\n",i);
i=i+1;
}