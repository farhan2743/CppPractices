//Write a C program to find prime series betwen given  interval.

#include<stdio.h>
#include<math.h>
bool isPrime(int p){
    for ( int i = 2; i <= sqrt(p); i++)
        if(p%i==0) return false;
    return true;
}
int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i = a; i <= b; i++)
        if (isPrime(i))
            printf("%d ,",i);
    return 0;
}
