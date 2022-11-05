/*
* * * * * 
* * * *
* * *
* *
*
*/
#include"stdio.h"
int main(int argc, char const *argv[])
{
    int n,i=0,j;
    scanf("%d",&n);

    while (n)
    {
        j=0;
        while(n>j++)
            printf("* ");
        printf("\n");
        n--;
    }
    
    return 0;
}
