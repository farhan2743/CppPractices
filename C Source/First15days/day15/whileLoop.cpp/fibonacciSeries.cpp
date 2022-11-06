// Fibonacii Number => 1 1 2 3 5 8 13 21  
// f1=1
// f2=1
// fn=f(n-1)+f(n-2)
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,f1=1,f2=1,f;
    printf("How Meny: ");
    scanf("%d",&n);
    printf("1, 1, ");
    while(n){
        f=f1+f2;
        printf("%d, ",f);
        f1=f2;
        f2=f;
        n--;
    }
    return 0;
}
