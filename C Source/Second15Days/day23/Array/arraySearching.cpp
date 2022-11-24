// Introduction of array with search

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,k;
    int num[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    cout<<"Enter value which you can search:";
    cin>>k;
    for(int i=0;i<n;i++)
        if(k==num[i]){
            cout<<"Data found"<<endl;
            break;
        }
    return 0;
}
