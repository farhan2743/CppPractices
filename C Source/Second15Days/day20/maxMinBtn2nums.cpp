#include<stdio.h>

int max(int p,int q){return p>q?p:q;}
int min(int m,int n){return m<n?m:n;}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    printf("Max is: %d\n",max(a,b));
    printf("Min is: %d",min(a,b));
    return 0;
}
