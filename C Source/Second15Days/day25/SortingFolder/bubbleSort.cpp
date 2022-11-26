#include<iostream>
using namespace std;

int main()
{
    
    int n,k;
    int num[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(num[j]>num[j+1]){
                int tamp=num[j];
                num[j]=num[j+1];
                num[j+1]=tamp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d, ",num[i]);

     //cout<<"\nThe first value of array is "<<num[0]<<" and last value is "<<num[n-1]<<endl;
return 0;
}
