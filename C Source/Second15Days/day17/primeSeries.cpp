
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,i,lp=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int k=2; k<=n;k++){
        bool flag=true;
        for ( i = 2; i <= sqrt(k); i++)
        {
            lp++;
        if(k%i==0){flag=false;break;} 
        
        }
        
        if(flag){
             printf("%d, ",k);
             //printf("Value of i= %d  Total loop : %d\n",i,i-1);
        }
    }
    printf("\nTotal loop: %d\n",lp);
    
    return 0;
}
