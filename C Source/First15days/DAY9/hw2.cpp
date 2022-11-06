/*Write a C program to input month number and print total number of days in month using switch...case.
 C program to find total number of days in a month using switch...case.

Print 31 for case 1, 3, 5, 7, 8, 10, 12.

Print 30 for case 4, 6, 9, 11.

Print 28/29 for case 2.

Print invalid input for default case.*/
#include<stdio.h>
int main(){
    int month;
    printf("Input month : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days : 31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:

        printf("Number of days : 30\n");
        break;
    case 2:
        printf("Number of days : 28/29\n");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}