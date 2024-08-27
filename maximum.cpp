#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,6,77,0,78,100,65,-10,78,120};

    int mx=INT8_MIN;    
    
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++){
        
        mx=max(mx,arr[i]);

    }

    cout<<"maximum element in the array is:"<<mx;  
}