/*Input coefficients of quadratic equation from user. Store it in some variable say a, b and c.

Input
Input a: 8 
Input b: -4 
Input c: -2

Output
Root1: 0.80 
Root2: -0.30*/


#include<stdio.h>
#include<math.h>

int main (){
    double a,b,c, root1,root2,D,img ;
    printf("Input a:");
    scanf("%lf",&a);
    printf("Input b:");
    scanf("%lf",&b);
    printf("Input c:");
    scanf("%lf",&c);

    D = b*b - 4*a*c;

    if (D==0)
    {
       printf("Roots are equal\n");
       root1 = -b /(2.00*a);
       printf("X = %.3lf",root1);

    }
    else if (D>0)
    {
       printf("Roots are real and not equal\n");
       root1 = (-b + sqrt(D)) /(2.00*a);
       root2 = (-b - sqrt(D)) /(2.00*a);
       printf("X1 = %.3lf \nX2 = %.3lf ",root1,root2);


 
    }
    
    else
    {
        printf("Roots are complex and not equal\n");
        root1 = -b/(2.00*1);
        img= sqrt(-D)/(2.00*a);
        printf("X1= %.2lf + %.2lf i \nX2= %.2lf - %.2lf i \n",root1,img,root1,img);
    }
    return +0;
}