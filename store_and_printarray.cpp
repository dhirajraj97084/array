#include<iostream>
using namespace std;

int main(){

   int n;
   cout<<"enter the size of an array:";
   cin>>n;
   int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"your array elements are:"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                                                                                                  
        cout<<&arr[i]<<endl;
    }           

}