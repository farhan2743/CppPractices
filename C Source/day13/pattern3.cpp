/*pattern using For loop 
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for(int j=1;j<=i;j++)
            printf("%d ",i);

        printf("\n");
    }
    
    return 0;
}