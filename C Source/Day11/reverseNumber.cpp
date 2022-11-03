/*Write a program in C to display the number in reverse order.

Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321*/

#include<stdio.h>
int main(){
    int num,i,revNu=0;
    printf("Input a number:");
    scanf("%d",&num);
    for(num;num!=0;num=num/10){
        revNu=revNu*10+(num%10);
    }
    printf("The number in reverse order is : %d",revNu);
}