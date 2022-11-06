/*
Write a C program to find HCF (Highest Common Factor) of two numbers.
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4
*/
#include<stdio.h>
int main(){
  int a,b , i ,hcf;
  printf("Input 1st number for HCF:");
  scanf("%d",&a);
  printf("Input 2nd number for HCF:");
  scanf("%d",&b);
  int n=(a>b)?b:a;
  for(i=1;i<=n;i++){
    if(a%i==0 & b%i==0) hcf=i;
  }
  printf("Gcd is :%d\n",hcf);
  return 0;
  
}