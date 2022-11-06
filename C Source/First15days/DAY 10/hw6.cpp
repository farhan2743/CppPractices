/*write a C program to input a person's age and check whether the person can vote or Can't vote using conditional operator. 

when the age is greater than or equal to 18, Can Vote is printed. Otherwise, Cannot Vote is printed.

Test Case-1
Enter your age: 12 
You cannot vote*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    age>=18?printf("You can vote"):printf("You cannot vote");





}
