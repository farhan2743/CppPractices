#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,i,sum;
    printf("enter any number :");
    scanf("%d",&n);
    while (1)
    {
        sum=0;
    while (n)
    {
       a=n%10;
       sum = sum + a;
       n/=10;

    }
    if(sum <10) break;
    else n=sum;
    }
    printf("Sum of the digits is : %d",sum);

    return 0;
}
