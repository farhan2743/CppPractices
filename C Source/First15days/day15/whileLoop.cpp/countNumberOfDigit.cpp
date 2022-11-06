//Program to count number of digits of any number

#include<stdio.h>
int main()
{
    int n ,counter=1;
    printf("Enter any number :");
    scanf("%d",&n);
    while (n/10)
    {
       counter++;
       n=n/10; 
    }
    printf("Number of digit :%d",counter);
    
    return 0;
}

