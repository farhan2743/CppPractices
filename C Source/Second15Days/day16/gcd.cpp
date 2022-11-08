#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gcd,a,b,c=1,d;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    d= a>b?a:b;
    while (c<=d)
    {
          if(a%c==0 && b%c==0) gcd = c;
          c++;
    }
    printf("The GCD of given numbers is %d\n",gcd);
    printf("Total loop :%d",c);
}
