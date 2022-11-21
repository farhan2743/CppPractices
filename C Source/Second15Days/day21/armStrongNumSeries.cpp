/*Write a C program to show whether a number is armstrong or not .
An Armstrong number is one whose sum of digits raised to the power three equals the number itself. 371,
 for example, is an Armstrong number because 3**3 + 7**3 + 1**3 = 371*/

#include<stdio.h>


int pow(int a,int b){
    int p =1;
    for ( int i = 1; i <= b; i++)
        p*=a;
 return p;
}
int noOfdigit(int n ){
    int counter=0 ;
    while (n%10 != 0){counter ++; n /= 10;}
return counter;
}
bool isArmstong(int n){
    int x=noOfdigit(n);
    int sum=0,num=n;
    while (n%10 != 0){
        sum+= pow(n%10,x);
        n /= 10 ;
        }
return num == sum;
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter interval (a-b) : ");
    scanf("%d%d",&a,&b);
    for ( int i = a; i <=b; i++)
    {
       if (isArmstong(i))
            printf("%d, ",i);
    }

    return 0;
}
