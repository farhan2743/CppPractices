/*1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,counter=1,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for(int j=1;j<=i;j++)
            printf("%d ",counter++);

        printf("\n");
    }
    
    return 0;
}