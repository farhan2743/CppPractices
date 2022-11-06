//program to calculate x^y


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, res=1 , n;
    printf("Enter value of x and Y ( X^y):");
    scanf("%d%d",&x,&y);
    while (y)
    {
        res*=x;
        y--;
    }
    printf("x^y = %d",res);
    
    return 0;
}

