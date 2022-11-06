#include<stdio.h>
int main(int argc, char const *argv[])
{
    int fact=1,n ;
    printf("Enter number:");
    scanf("%d",&n);

    while (n)
    {
        fact*=n;
        n--;
    }

    printf("The factorial is %d",fact);
    return 0;
}
