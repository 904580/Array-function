#include <stdio.h>
#include<conio.h>
void main() {
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("largest number is: %d", a);
    else
    printf("largest number is: %d", b);
    getch();
}