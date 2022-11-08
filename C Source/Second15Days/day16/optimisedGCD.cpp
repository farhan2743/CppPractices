#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gcd,a,b,c=1,d;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    while (a!= b )
    {
          if (a>b)
            a-=b;
          else b-= a ;
          c++;
    }
    printf("The GCD of given numbers is %d\n",a);
    printf("Total loop :%d",c);
}
