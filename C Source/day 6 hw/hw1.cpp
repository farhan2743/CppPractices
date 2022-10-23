/*All the character that lies between a-z or A-z (including a, z, A, Z) are alphabets. So to check 
whether the input character is an alphabet or not alphabet in C programming, you have to ask from user to enter
a character and then check whether it lies between a-z or A-Z or not. If it is, then it is an alphabet, otherwise, 
it is not an alphabet. Now your Task is to write a program in C to check whether the given input is an alphabet or not.
input:
Enter a character: A

output:
A is an alphabet.*/


#include<stdio.h>
int main(){
    char c;
    printf("Enter any character : ");
    scanf("%c",&c);
    if ((c>='a' && c <='z'|| c>='A' && c <='Z'))
    {
        printf("%c is an alphabet",c);

    }
    else
    printf("%c is not an alphabet",c);
    
}