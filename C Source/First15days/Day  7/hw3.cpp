/*Write a C program to check whether a character is an 
uppercase or lowercase alphabet, Using if-else.

enter any character: B

B is in uppercase*/


#include<stdio.h>
int main(){
    char c;
    printf("enter any character: ");
    scanf("%c",&c);
    if (c  >= 65 && c <= 90)
    { 
        printf("%c is in uppercase.");
    }
    else if (c  >= 97 && c <= 121)
    {
        printf("%c is in lowercase.",c);   
     }
    
    else printf("Input invalid");
}