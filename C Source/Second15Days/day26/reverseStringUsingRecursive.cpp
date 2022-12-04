#include<iostream>
using namespace std;

void revarse(char str[], int length){
    if(length<0) return;
    cout<<str[length];
    revarse(str,length-1);

}

int main()
{
    char name[100];
    int length = 0;
    cout<<"Enter Student Name: ";
    gets(name); // get string -. this function read one line from console as string
    //cin>>name;
    for(int i=0; name[i]!='\0'; i++)   length++;
    revarse(name,length-1);

    return 0;
}
