/*Write a C program to input the basic salary of an employee and calculate its Gross salary 
according to the following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/


#include<stdio.h>
int main (){
    printf("Enter basic salary :");
    double salary, amount;
    scanf("%lf",&salary);

    if (salary <= 10000)
        amount = salary+ (salary *.2) +(salary*.8);
    else if (salary <= 20000)
        amount = salary+ (salary *.25) +(salary*.9);
    else 
        amount = salary+ (salary *.30) +(salary*.95);
    printf("Tatal gross salary : %.2lf\n",amount);
    
    return 0;
}