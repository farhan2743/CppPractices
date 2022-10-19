/* Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/


#include<stdio.h>
int main(){
    int sec,hour,min,second;

    printf("Input seconds:"),
    scanf("%d",&sec);
    hour= (sec /3600);
    min= (sec%3600)/60;
    second= (sec%3600)%60;

    printf("H:M:S -%d:%d:%d",hour,min,second);
}
