#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = n; i >0; i--){
        for(int j=0;j<=i;j++)
            printf("* ");

        printf("\n");
    }
    
    return 0;
}