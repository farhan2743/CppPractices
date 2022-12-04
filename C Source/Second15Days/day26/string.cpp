#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int length = 0;
    cout<<"Enter Student Name: ";
    gets(name); // get string -. this function read one line from console as string
    //cin>>name;
    for(int i=0; name[i]!='\0'; i++)   length++;
    for(int i=length-1; i >=0; i--)   
        cout<<name[i];
    return 0;
}
