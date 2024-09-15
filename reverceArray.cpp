#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,15,0,-6,77};

     int n=sizeof(arr)/sizeof(int); 
   

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    int i=0,j=n-1; 
    while (i<j)
    {
        /* code */
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;   

}