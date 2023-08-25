#include<stdio.h>
#include<conio.h>
void main()
{
 int ch,a,b;
 clrscr();
 printf("1. ADDITION\n");
 printf("2. SUBTRACTION\n");
 printf("3. MULTIPLICATION\n");
 printf("4. DIVISION\n");
 printf("5. EXIT\n");
 printf("\nENTER YOUR CHOICE:");
 scanf("%d",&ch);
 printf("ENTER TWO INTEGERS:");
 scanf("%d%d",&a,&b);
 switch(ch)
 {
	case 1:
		printf("ADDITION =%d",(a+b));
		break;
	case 2:
		printf("SUBTRACTION =%d",(a-b));
		break;
	case 3:
		printf("MULTIPLICATION =%d",(a*b));
		break;
	case 4:
		printf("DIVISION =%f",((float)a/(float)b));
		break;
	case 5:
		printf("THANKYOU");
		exit(1);

	default:
		printf("INVALID CHOICE");
	}
	getch();
}