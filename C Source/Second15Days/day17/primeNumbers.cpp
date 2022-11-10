//Whether a nu/mber is prime or not .

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    bool flag=false;
    printf("Enter any number :");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
      if(n%i==0) flag=true;  
       
    }
    if(flag)
        printf("Not Prime\n");
    else
        printf("Prime \n");
    return 0;
}
