// Whether a nu/mber is prime or not (without flag).

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,i;
    bool flag=false;
    printf("Enter any number :");
    scanf("%d",&n);
    for ( i = 2; i <=gg sqrt(n); i++)
    {
      if(n%i==0) {flag=true; break;}  
       
    }
    printf("Value of i= %d  Total loop : %d\n",i,i-1);
    if(flag)
        printf("%d is Not Prime\n",n);
    else
        printf("%d is Prime \n",n);
    return 0;
}
