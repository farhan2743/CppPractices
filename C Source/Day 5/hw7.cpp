/*Write a C program to input cost price and selling price of a product and check profit or loss.
 Also calculate total profit or loss using if else.

Input
Input cost price: 1000 
Input selling price: 1500

Output
Profit: 500*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input cost price: ");
    scanf("%d",&a);
    printf("Input selling price: ");
    scanf("%d",&b);
    c=b-a;
    printf("Profit: %d",c);
    return 0 ;

}