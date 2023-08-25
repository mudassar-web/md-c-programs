#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,k,len;
  char str1[15]="Hello ";
  char str2[15]="World";
  char s1[10]="Jerry";
  char s2[10]="Ferry";
  char name[25];
  char n[25];
  char city[10];
  char grades[]={'O','A','B','C','D','E','F'};
  clrscr();
  for(i=0;i<=6;i++)
  {
	printf("\n%c",grades[i]);
  }
  printf("\nEnter name=");
  scanf("%s",name);
  printf("\nEnter City:");
  scanf("%s",city);
  //gets(city);
  printf("Your name=%s",name);
  //puts(city);
  printf("\n------STRING FUNCTIONS------");
  printf("\nLength=%d",strlen(name));
  len=strlen(city);
  printf("\n%s contains %d characters",city,len);
  strcpy(n,name);
  printf("\nTarget=%s",n);
  printf("\nReverse=%s",strrev(n));
  printf("\nName=%s",name);
  strcat(str2,str1);
  printf("\nStr1=%s",str1);
  printf("\nStr2=%s",str2);
  i=strcmp(s1,"Jerry");
  j=strcmp(s1,s2);
  k=strcmp(s2,"Ferry");
  len=strcmp(s2,s1);
  printf("\ni=%d\nj=%d\nk=%d\nl=%d",i,j,k,len);
  getch();
}