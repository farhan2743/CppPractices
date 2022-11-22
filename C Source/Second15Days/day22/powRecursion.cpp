// x^y function to calculate power


#include<stdio.h>


int power(int a,int b){
    int p =1;
    for ( int i = 1; i <= b; i++)
        p*=a;
 return p;
}
int rPow(int x,int y){
if(y==0) return 1;
 return x*rPow(x,y-1);
}
int main(int argc, char const *argv[])
{
    int num, pow;
    printf("Enter any two numbers : ");
    scanf("%d%d",&num,&pow);
    printf("%d ^ %d =  %d \n",num,pow,rPow(num,pow));
    return 0;
}
