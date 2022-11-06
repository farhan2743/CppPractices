/*Write a program in C to display the multiplication table of a given integer.

Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Input the number (Table to be calculated) :");
    scanf("%d",&n);
    for ( i =1; i <=10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
}
