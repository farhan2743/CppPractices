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
printf("Input character : ");
scanf("%c",&c);
if (c=='a' ||c=='A' ||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'  )
  printf("%c is a vowel",c);
else printf("%c is a consonant",c);
}