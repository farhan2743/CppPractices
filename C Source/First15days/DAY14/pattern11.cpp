/*
          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************

           | *
         * | **
        ** | ***
       *** | ****
      **** | *****
     ***** | ******
    ****** | *******
   ******* | ********
  ******** | *********


*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for ( i = 0; i <n; i++){
        for(int j=0;j<n-i;j++)
            printf(" ");
        for(int j=0;j<i;j++)
            printf("*");
        for(int k=0;k<=i;k++)
            printf("*");

        printf("\n");
    }
    
    return 0;
}
