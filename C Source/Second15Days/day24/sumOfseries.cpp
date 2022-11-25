/*Write a program in C to calculate the sum of numbers from 1 to n using recursion. Go to the editor
Test Data :
Input the last number of the range starting from 1 : 5
Expected Output:

The sum of numbers from 1 to 5 : 
15*/
#include<iostream>
using namespace std;

int printSeries(int n){
    int sum=0;
    if(n==0) return 0;
    sum = n+printSeries(n-1);
    return sum;

    
}

int main(int argc, char const *argv[])
{
    cout<<printSeries(5);
    return 0;

}