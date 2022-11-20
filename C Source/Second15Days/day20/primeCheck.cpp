#include<stdio.h>
#include"math.h"
bool isPrime(int p){
    for ( int i = 2; i <= sqrt(p); i++)
        if(p%i==0) return false;
    return true;
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("%d is %s",n,isPrime(n)?"Prime":"not Prime" );
    return 0;
}
