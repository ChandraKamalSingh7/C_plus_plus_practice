#include<iostream>
using namespace std;
int mod=1e9+7;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int output=0;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     output=0;
    //     for(int j=i;j<n;j++){
    //         output+=arr[j];
    //         sum+=output;
    //         cout<<output<<endl;
    //     }   
    // }
    // cout<<sum<<endl;
   int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=(sum+(n-i)*(i+1)*arr[i])%mod;
        }
        cout<<sum%mod<<endl;
    

    return 0;
}