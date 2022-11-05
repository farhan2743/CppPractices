#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, rev_num =0;
    printf("Enter any number :");
    scanf("%d",&n);

    while (n!=0)
    {
        rev_num= rev_num*10+ n%10;
        n=n/10;
    }
    printf("Reverse number is %d",rev_num);
    return 0;
}
