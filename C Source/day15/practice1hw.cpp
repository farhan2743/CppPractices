/*
       1
      212
     32123
    4321234
   543212345
  65432123456
 7654321234567
876543212345678

*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for(int j=1;j<=n-i;j++)
            printf(" ");
        for(int j=i;j>1;j--)
            printf("%d",j);
        for(int k=1;k<=i;k++)
            printf("%d",k);

        printf("\n");
    }
    
    return 0;
}
