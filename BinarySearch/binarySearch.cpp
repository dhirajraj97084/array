#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
         if (key>arr[mid])
        {
           s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}


int main(){
    int arr[8]={2,5,7,9,12,16,18,24};

    int index=binarySearch(arr, 8 , 90);
    cout<<"your array index is:"<<index<<endl;
}