/*Write a C program to input a character and check
 whether the character is alphabet or not using Conditional/Ternary operator ?:.

Example
Input
Enter any character: a
Output
It is ALPHABET*/


#include<stdio.h>
int main(){

printf("Enter any character :");
char c;
scanf("%c",&c);
(c>=97&&c<=122)?printf("It is ALPHABET"):(c >= 65 && c <= 90)?printf("It is ALPHABET"):printf("It is not an ALPHABET");
}