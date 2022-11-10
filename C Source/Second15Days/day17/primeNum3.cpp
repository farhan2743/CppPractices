#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int n,i;
    
    printf("Enter any number :");
    scanf("%d",&n);
    for ( i = 2; i < n/2; i++)
    {
      if(n%i==0) break;  
       
    }
    printf("Value of i= %d  Total loop : %d\n",i,i-1);
    if(i!=n)
        printf("%d is Not Prime\n",n);
    else
        printf("%d is Prime \n",n);
    return 0;
}
