/*Write a C program to create menu driven calculator that performs basic arithmetic operations
 (add, subtract, multiply and divide) using switch case . The calculator should input two 
 numbers and an operator from user. It should perform operation according to the operator entered and 
 must take input in given format.
<num 1> <op> <num 2>
Input two numbers and a character from user in the given format. Store them in some variable say num1, op and num2.

Switch the value of op i.e. switch(op).

There are four possible values of op i.e. '+', '-', '*' , '%' and '/'.

For case '+' perform addition and store result in some variable i.e. result = num1 + num2.

Similarly for case '-' perform subtraction and store result in some variable i.e. result = num1 - num2.

Repeat the process for multiplication and division.

Finally print the value of result.

Example
Input
5.2 - 3
Output
2.2*/
#include<stdio.h>
#define PI 3.1416
int main(int argc, char const *argv[])
{   
   char op;
   double num1,num2,result=0;
   printf("Calculator\n");
   scanf("%lf%c%lf",&num1,&op,&num2);
   switch (op)
   {
   case '+':
    printf("%.2lf %c %.2lf = %.2lf\n",num1,op,num2,num1+num2);
    break;
   
   case '-': printf("%.2lf %c %.2lf = %.2lf\n",num1,op,num2,num1-num2);
    break;
   case '/': printf("%.2lf %c %.2lf = %.2lf\n",num1,op,num2,num1/num2);
    break;
   case '*': printf("%.2lf %c %.2lf = %.2lf\n",num1,op,num2,num1*num2);
    break;   
   default:
   printf("Syntex Error\n");
    break;
   } 
}