/*
       *****************
        ***************
         *************
          ***********
           *********
            *******
             *****
              ***
               *
*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 0; i <n; i++){
        for(int j=0;j<i;j++)
            printf(" ");
        for(int j=i;j<n;j++)
            printf("*");
        for(int j=0;j<n-i-1;j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}