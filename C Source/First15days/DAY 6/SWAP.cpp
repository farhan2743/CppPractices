#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap a = %d and b = %d\n",a,b);
    int temp =a;
    a = b ;
    b = temp;
    printf("After swap a = %d and b = %d\n",a,b);

}