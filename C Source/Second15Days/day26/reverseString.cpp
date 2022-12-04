#include<iostream>
using namespace std;
int main()
{
    char name[50];
    cout<<"Enter Student Name: ";
    gets(name); // get string -. this function read one line from console as string
    //cin>>name;
    cout<<"Student Name is "<<name<<endl;
    return 0;
}
