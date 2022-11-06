/*Ex-6:Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade. 

Example
Input
Temperature in fahrenheit = 205
Output
Temperature in celsius = 96.11 C*/

#include<stdio.h>
int main(){
    
    printf("Temperature in fahrenheit =");
    double F,C,x;
    scanf("%lf",&F);
    C= ( F - 32) * 5 / 9;
    printf("Temperature in celsius =%lf C",C);
}

