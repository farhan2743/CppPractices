//C program to find a number which is divisible by a and b


#include<stdio.h>
int main(){
    int n, a,b;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("Enter two divisor :");
    scanf("%d%d",&a,&b);
    
    if (n%a == 0 && n%b == 0)
    {
       printf("%d is divisible by %d and %d\n",n,a,b);
    }
   else
   {printf("%d is not divisible by %d and %d\n",n,a,b);}
    
    
}