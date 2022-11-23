#include<iostream> 
using namespace std;

int fact (int a ){
    if (a == 1) return 1;
    return a * fact(a-1);
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter any number :\n";
    cin>>num;
    cout<<num<<" Factorial = "<<fact(num)<<endl;
    return 0;
}
