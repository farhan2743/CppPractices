#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0 ,a;

    printf("Enter any number: ");
    scanf("%d",&n);

    while (n)
    {
       a=n%10;
       sum = sum + a;
       n/=10;

    }
   
    printf("The sum of the digits of the given number is %d\n",sum);


    return 0;
}
