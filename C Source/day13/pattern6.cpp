/*Enter number of lines :6
A 
B B
C C C
D D D D
E E E E E
F F F F F F*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    char c='A';
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for(int j=1;j<=i;j++)
            printf("%c ",c);

        printf("\n");
        c++;
    }
    
    return 0;
}