#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gcd,a,b,c=1;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    while (a%b)
    {
        int d= a%b;
        a=b;
        b=d;
        c++;
    }
    printf("The GCD of given numbers is %d\n",b);
    printf("Total loop :%d",c);
}
