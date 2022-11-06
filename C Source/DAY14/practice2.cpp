#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,l,j,k,counter=0,i;
    printf("Enter number of lines :");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
        {
        for ( j = 0; j<n-i; j++)
        {
            printf(" ");
        }
        for ( k = 0; k < i; k++)
        {
            printf("%d",counter);
        }
        counter++;
        for ( l = 0; l<= i ;l++)
        {
             printf("%d",counter);
        }
        
      
      
       printf("\n");
    }
    




}