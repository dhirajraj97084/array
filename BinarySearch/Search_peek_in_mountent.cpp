#include<iostream>
using namespace std;

int peekInMount(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
           s=mid+1;
           
        }else{
            e=mid;
        }
      mid=(s+e)/2;  
    }
    
  return s;
    
}

int main(){
    int arr[10]={1,3,8,9,15,4,3,2,1,0};

    int index=peekInMount(arr,10);
    cout<<"index of peek element in mountedArray is:"<<index<<endl;
     cout<<" peek element in mountedArray is:"<<arr[index]<<endl;
   
}