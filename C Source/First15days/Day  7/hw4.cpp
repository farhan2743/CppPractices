/*Program to take the hours and minutes as input by the user and the show that whether it is AM or PM using if-else statement
Flowchart of Program to show that whether it is AM or PM using if-else statement*/

#include<stdio.h>
int main (){
    int time ;
    printf("Enter time : ");
    scanf("%d",&time);
    if (time>= 12 && time < 24)
    {
        printf("It is PM");
    }
     else 
    {
        printf("It is AM");
    }   
}