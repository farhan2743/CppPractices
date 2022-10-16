/*
Doc sec

Day one program
 Athur by farhan
 this is my first Program
*/

#include<stdio.h>   //linking sec
// stdio = standard i/o

#define pi 3.1416  //define sec

double rediou;         // Global Diclaration sec


int main(){             // Main Function
    double area;
    printf("Enter Value of redious: ");
    scanf("%lf",&rediou);
    area=pi*rediou*rediou;
    printf("radius is : %lf Area is : %lf",rediou,area);
}


// subProgram