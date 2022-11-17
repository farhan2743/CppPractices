#include<stdio.h>

int sumOfDigit(int n);  /// Function prototype
int main(int argc, char const *argv[])
{
    int n,a,i;
    printf("enter any number :");
    scanf("%d",&n);
   
    while (n>9)
         n=sumOfDigit(n);  // Function Call ---> Call By Value
    printf("Sum of the digits is : %d",n);
    return 0;
}

// Function defination
int sumOfDigit(int num){
    int ans=0;
    while (num)
    {
       ans = ans +num%10;
       num/=10;
    }
    return ans;
}