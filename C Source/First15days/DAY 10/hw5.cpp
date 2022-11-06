/*Write a C program to read temperature in centigrade and 
display a suitable message according to temperature state below 
using Conditional operator.

Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot


Test Case-1
Input days temperature : 42
Its very hot.*/


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int temp;
    printf("Input days temperature : ");
    scanf("%d",&temp);


    (temp<0)?printf("Its freezing"):(temp>0 && temp<=10)?printf("Is very cold"):
    (temp>10 && temp<=20)?printf("Its cold"):(temp>20 && temp<=30)?printf("Is normal"):
    (temp>30 && temp<=40)?printf("Its hot"):printf("Is very hot");

}