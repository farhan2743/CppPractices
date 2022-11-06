/*Write a C program to input an alphabet and check whether it is vowel or consonant using switch case. C program to check
 vowel or consonant using switch case.

Example
Input
Input alphabet: c
Output
'c' is consonant*/

#include<stdio.h>
int main(){
    char letter ;
    printf("Enter any letter :");
    scanf("%c",&letter);
    switch (letter)
    {
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    case 97:
    case 101:
    case 108:
    case 112:
    case 117:


    printf("Vowel");
    break;
    
    default:
    printf("Consonant");
    }
}