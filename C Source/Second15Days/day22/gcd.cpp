#include<stdio.h>

int nGCD(int a,int b){      // Normal function
     while (a%b)
    {
        int d= a%b;
        a=b;
        b=d;
    }
    return b;
} 
int GCD(int a, int b){      //recursive Function
    if(a%b==0) return b;
    return GCD(b,a%b);
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    printf("The GCD of given numbers is %d\n",GCD(a,b));
}