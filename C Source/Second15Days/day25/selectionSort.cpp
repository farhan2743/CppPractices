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
        for(int j=i+1;j<n;j++){
            if(num[i]>num[j]){
                int tamp=num[i];
                num[i]=num[j];
                num[j]=tamp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d, ",num[i]);

     //cout<<"\nThe first value of array is "<<num[0]<<" and last value is "<<num[n-1]<<endl;
return 0;
}
