#include<stdio.h>
#include<conio.h>
void main()
{
    int rows, coef = 1, space, i, j;
    clrscr();

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
	    printf("%4d", coef);
	    coef++;
        }
        printf("\n");
    }
    getch();
}