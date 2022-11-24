/*1. Write a program in C to print first 50 natural numbers
using recursion. Go to the editor
Expected Output:

 The natural numbers are : 1  2  3
  4  5  6  7  8  9  10  11  12  13
  14  15  16  17  18  19  20  21  
22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  
39  40  41  42  43  44  45  46  47
  48  49  50 */


#include<iostream>
using namespace std;

void printSeries(int n){
    if(n==0) return; 
    printSeries(n-1);
    cout<<n<<", ";
    return;
    
}

int main(int argc, char const *argv[])
{
    printSeries(22);
    return 0;
}
