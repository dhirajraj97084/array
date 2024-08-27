#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,6,77};
    
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}