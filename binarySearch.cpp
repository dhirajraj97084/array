#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
   int start=0;
   int end=size-1;
   int mid=(start+end)/2;

   while(start<=end){
    if(key==mid){
        return mid;
    }
    if(key>mid){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
   }
   return -1;
}

int main(){
    int even[8]={1,2,4,6,8,7,9,14};

    int index=binarySearch(even,8,1);
    cout<<"your key index is:"<<index<<endl;
}