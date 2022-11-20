#include<stdio.h>
#define pi 3.1416
double diameter (double r);
double area( double r);
double circumference (double r );

int main(int argc, char const *argv[])
{
    double r;
    printf("Enter radius of the circle :");
    scanf("%lf",&r);
    printf("The diameter of the circle is %.3lf\n", diameter(r));
    printf("The area of the circle is %.3lf\n", area(r));
    printf("The circumference of the circle is %.3lf\n", circumference(r));
    return 0;

}
    double diameter (double r)
    {
        return 2*r;
    }

    double area( double r){
        return pi *r*r;
    }
    double circumference (double r ){
        return 2* pi* r;
    }