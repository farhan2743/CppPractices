/*A triangle is valid if sum of its two sides is greater than the third side. Means if a, b, c are 
three sides of a triangle. Then the triangle is valid if all three conditions are satisfied
a + b > c
a + c > b and
b + c > a

Write a C program to input side of a triangle and check whether triangle is valid or not using if else.

Input
Input first side: 7 
Input second side: 10 
Input third side: 5

Output
Triangle is valid*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input first side: ");
    scanf("%d",&a);
    printf("Input second side: ");
    scanf("%d",&b);
    printf("Input third side: ");
    scanf("%d",&c);
    if (a + b > c)
    {
       if (a + c > b)
       {
        if (b + c > a)
        {
           printf("Triangle is valid");
        }
        else printf("Triangle is not  valid");
        
       
    }
    else printf("Triangle is not valid");
    
}
else printf("Triangle is not valid");
}
