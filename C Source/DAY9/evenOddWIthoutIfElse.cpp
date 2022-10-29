#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter any  number  :");
    scanf("%d",&a);
   // (a%2==0)?printf("Even number"):printf("Odd number");
  /* switch (a%2)
   {
   case 0:
    printf("Even number");
    break;
   
   default:printf("Odd number");
    break;
   }*/

    //Using Logical op
    ((a&1)&& printf("odd Number\n")) || (!(a&1)&& printf("Even Number\n"));
   
   
   //what Printf return? 
    int x = printf("Farhan");   // Thsi Printf return Total number of char which it print
    printf("x is %d\n",x);


    return 0 ;
}
