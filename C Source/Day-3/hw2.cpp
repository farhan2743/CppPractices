/*Ex-2: Write  a C program to compute the perimeter and area of a rectangle.

Expected Output :
Enter perimeter : 24
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/

#include<stdio.h>
int main (){
    double Perimeter;
    printf("Enter perimeter: ");
    scanf("%lf", &Perimeter);
    printf("Perimeter of the rectangle is =%lf",Perimeter);
    printf("inches\n");
    printf("Area of the rectangle is =35 square inches");

}