/*Write a C program to reverse the digits of a given integer. Go to the editor
Example:
Input:
i = 123
i = 208478933
i = -73634
Output:
Reverse integer: 321
Reverse integer: 339874802
Reverse integer: -43637*/



#include<stdio.h>
int main(){
    int num, a, revNum=0 ,i;
    printf("Enter any number to reverse ");
    scanf("%d",&num);
    while (num % 10)
    {
        revNum = revNum*10 + (num%10);        
        num= num/ 10; 
    } 
  printf("the Reverse   number is %d",revNum);
  
}