/*Pattern using for loop
A 
B C
D E F
G H I J
K L M N O
P Q R S T U
*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    char c='A';
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for(int j=1;j<=i;j++)
            printf("%c ",c++);

        printf("\n");
        
    }
    
    return 0;
}