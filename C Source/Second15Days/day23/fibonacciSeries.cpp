// Fibonacci series using recursive function
// F(n)=F(n-1)+ F(n-2)


#include<iostream>
using namespace std ;

int F(int n){
    if (n==0 || n==1 )  return n;  //Base condition for terminating recursion.
    return F(n-1)+F(n-2);  //recurtion call
}

int main()
{
    int f;
    cout<<"Enter value of n :";
    cin>>f;
    for (int i = 0; i <= f; i++)
    {
        cout<< F(i)<<", ";
    }
    return 0;
}
