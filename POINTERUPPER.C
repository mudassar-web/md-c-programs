#include<stdio.h>
#include<conio.h>
#include<string.h>
void printupper(struct fullname);
struct fullname
{
char title[5];
char firstname[20];
char lastname[20];
};

void main()
{
struct fullname f1={"mr.","mudassar","ansari"};
struct fullname *fp;
clrscr();
fp=&f1;
printf("NAME=%s %s %s",fp->title,fp->firstname,fp->lastname);
printupper(f1);
getch();
}

void printupper(struct fullname f)
{
printf("\nNAME=%s %s %s",strupr(f.title),strlwr(f.firstname),strupr(f.lastname));
}