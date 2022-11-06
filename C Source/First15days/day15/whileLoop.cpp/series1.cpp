//Display first n natural numbers :1, 2, 3, 4, 5, 6, 7, 8, 9, 10

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,n ;
    printf("Enter limit :");
    scanf("%d",&n);

    while (i<=n)
    {
        (i==n)?
        printf("%d",i):printf("%d, ",i);
        i++;
    }
    return 0;
}
