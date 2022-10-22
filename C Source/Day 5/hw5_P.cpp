/* Write a C program to check whether an alphabet is vowel or consonant using if else.
 How to check vowels and consonants using if else in C programming. C Program to input
  a character from user and check whether it is vowel or consonant.

Input
Input character: a
Output
'a' is vowel*/

#include <stdio.h>
int main() 
{
char c;
int small, big;
printf("Enter the letter");
scanf("%c", &c);
small = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
big = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (small || big)
printf("%c is a vowel", c);
else
printf("%c is a consonant", c);
return 0;
}