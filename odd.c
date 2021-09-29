#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n;
    clrscr();
    printf("\n enter the number: ");
    scanf("%d", &n);
    printf("\nODD NUMBERS BETWEEN 1 AND %d ARE: \n",n);
    for (i = 1; i<=n; i+=2)
    {
        printf("%d", i);
    }
    getch();
}
