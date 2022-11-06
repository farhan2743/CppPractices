#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <n; i++){
        for(int j=1;j<=n-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }
        
    return 0;
}
