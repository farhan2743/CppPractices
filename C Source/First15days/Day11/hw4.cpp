/*Factor of any number is a whole number which exactly divides the number into a whole number without leaving any remainder. For example: 2 is a factor of 6 because 2 divides 6 exactly leaving no remainder.
now your task is write a C program to input a number from user and find all factors of the given number using for loop.

test Data:
Input
Input number: 12
Output
Factors of 12: 1, 2, 3, 4, 6, 12*/


#include <stdio.h>
int main() {
    int num, i;
    printf("Input number:");
    scanf("%d", &num);
    printf("Factors of %d : ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}