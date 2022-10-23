/*Swap using bitwise operator
  Bitwise operator works on bit by bit logical operation .
  Bitwise operators are :
    &   ---     bitwise AND
    |   ---     bitwise OR
    ^   ---     bitwise XOR
    <<  ---     left shift
    >>  ---     right shift

idea behind swap with bit-op
    let a=5
    b=6
step 1: a = a^b
    bit combination of ab
    
    a= 101
    b= 110
    ------------
a= a^b=011
step 2: b= a^b
    a=  011
    b=  110
    -----------
 b=a^b= 101  --->5=a

 step 3: a=a^b
    a=  011
    b=  101
    ----------
a=a^b=  110 ----->6=b

a=6
b=5

*/
 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap a = %d and b = %d\n",a,b);
    
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b;
    printf("After swap a = %d and b = %d\n",a,b);

}