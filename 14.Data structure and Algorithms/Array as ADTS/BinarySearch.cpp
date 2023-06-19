#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int sp=0;
    int ep=n;

    

  while(sp<=ep){
        int mid=(sp+ep)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            ep=mid+1;
        }else{
            ep=mid-1;
        }

    }
    return -1;
   
}

int main(){
        int n;
        cin>>n;

        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];

        }
        
        int key;
        cin>>key;
        
        for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
        }
    }

        cout<<BinarySearch(array,n,key)<<endl;


    return 0;
}
