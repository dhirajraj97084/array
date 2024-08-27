#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,6,77};

    int x;
    cout<<"enter the your targeted elements: ";
    cin>>x;
    
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++){
        if(arr[i]>=x){
            cout<<arr[i]<<" ";
        }
    }
}