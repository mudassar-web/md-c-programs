#include<stdio.h>
#include<conio.h>
struct publisher
{
char pname[20];
char address[20];
char phone[20];
int pin;
};
struct book
{
char bname[30];
char isbn[20];
char author[20];
int price;
struct publisher p;
};
void main()
{
struct book b={"LET US C","123-456-XAB","YASHAWANT K",350,"BPB PUBLICATIONS","MIRA ROAD","123456",401107};
clrscr();
printf("\nBOOK NAME=%s, ISBN=%s, AUTHOR=%s, PRICE=%d, PUBLISHER NAME=%s, ADDRESS=%s, PHONE=%s, PIN=%d",b.bname,b.isbn,b.author,b.price,b.p.pname,b.p.address,b.p.phone,b.p.pin);
getch();
}