
#include<stdio.h>
int main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    if (a&1)
    {
        printf("The number is odd\n");

    }
    else 
        printf("The number is even\n");
}