#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b,max ;
    printf("Enter any two numbers  :");
    scanf("%d%d",&a,&b);
    (a>b)? printf("%d is grater\n",a):printf("%d is grater\n",b);
    
    //max= (a>b)? a:b;
    //printf("%d is Max\n",max);
    
    
    
    return 0;
}
