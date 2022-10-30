/*Write a program to calculate the area of different geometrical figures like Circle,
 triangle, trapezoid, square, and rectangle.

The program should ask the user to enter the code for which the user wants to find out the area. 

→ ‘t’ for triangle🔺
→ ‘z’ for trapezoid
→ ‘c’ for circle ⚪  
→ ‘s’ for square ⬜
→ ‘r’ for rectangle ◾
for r it takes input base and height and output area. 

for z it takes input base1, base2 & height and output area of trapezoid.
for c it takes input redious  and output area of circle.

and so on*/

#include<stdio.h>
#define PI 3.1416
int main(int argc, char const *argv[])
{   
   char op;
   double area=0 , r, a ,b, h;
   printf("Area calculation program\n");
   printf("Circle      --> c\n");
   printf("Trapezium   --> z\n");
   printf("Square      --> s\n");
   printf("Rectangle   --> r\n");
   printf("Triangle    --> t\n");
   printf("Choose any option : ");

   scanf("%c",&op);
   switch (op)
   {
   case 'c':
   case 'C':
    printf("Enter radius :");
    scanf("%lf",&r);
    area = PI * r*r;
    break;
   case 'z':
   case 'Z':
    printf("Enter base1 :");
    scanf("%lf",&a);
    printf("Enter base2 :");
    scanf("%lf",&b);
    printf("Enter height :");
    scanf("%lf",&h);
    area =(a + b )*h/2.0;
    break;
   case 's':
   case 'S':
    printf("Enter one side :");
    scanf("%lf",&a);
    area = a*a;
    break;
   case 'r':
   case 'R':
    printf("Enter base1 :");
    scanf("%lf",&a);
    printf("Enter base2 :");
    scanf("%lf",&b);
    area =a*b;
    break;
   case 't':
   case 'T':
    printf("Enter base :");
    scanf("%lf",&a);
    printf("Enter height :");
    scanf("%lf",&h);
    area =.5*a*h;
    break;
   default:
   printf("Invalid input\n");
    break;
   }
    printf("Area = %.3lf",area);


    return 0;
}
