#include<iostream>
using namespace std;

int main(){

    int arr[]={2,3,4,5,6,77,0,78,100,65,-10,78,120};

    int mini=INT8_MAX; //get minimum
    int maxi=INT8_MIN;  //get maximum
    
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++){  

        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);

    }

    cout<<"minimum element in the array is:"<<mini<<endl;  
    cout<<"maximum element in the array is:"<<maxi<<endl;
    cout<<"sum of maximum and minimum element in the array is:"<<(mini+maxi)/2;
}