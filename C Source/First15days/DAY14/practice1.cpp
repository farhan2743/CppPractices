/*
111111
22222
3333
444
55
6
*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,counter=1,j;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = n; i>0; i--)
    {   
        for ( j=0;j<i;j++)
        {
            printf("%d",counter);
        }
        counter++;

        printf("\n");
    }
    
    return 0;
}
