// C program to find the cube of a number using function 


#include <stdio.h>
int Cube(int n);
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter any Number: ");
    scanf("%d",&a);
    printf("Cube of the Number is %d", Cube(a));
    return 0;
}


int Cube(int n){
    int cube=n*n*n;
    return cube;
}