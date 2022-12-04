// find string length
// find word in string
#include<iostream>
using namespace std;
int main()
{
    char name[50];
    cout<<"Enter Student Name: ";
    gets(name); // get string -. this function read one line from console as string
    int length=0, word=0;
    for(int i=0; name[i]!='\0'; i++){
        length++;
        if(name[i]==' ') word++;
    }
        
    cout<<"Student Name is "<<name<<endl;
    cout<<"String Length: "<<length<<" Total word is "<<word+1;
    return 0;
}
