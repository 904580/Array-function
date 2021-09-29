//Write a program to accept a number and print if the number is Positive/Negative in C language

#include<stdio.h>
#include<conio.h>
void main() 
{
    int num;
    printf("enter the number");
    scanf("%d" ,num);
    if (num>0)
    printf("Given number is positive");
    else if (num<0)
    printf("Given number is negative");
    else
    printf("number is zero");
    getch();

}
