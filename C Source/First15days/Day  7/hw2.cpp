/*Write a C++ Program to convert inches to feet yards and inches.


Enter Inches to Convert ::500

After Conversion from inches to feet, yards and inches ::

Yards = 13

Feet = 2

Inches = 8*/

#include<stdio.h>
int main (){
    int inch,yard,feet,inches;
    printf("Enter Inches to Convert ::");
    scanf("%d",&inch);

    yard = inch / 36;
    feet = (inch%36)/ 12;
    inches =  (inch%36)%12;
    
    printf("Yards = %d \n\n Feet = %d \n\n Inches = %d\n",yard,feet,inches);


}