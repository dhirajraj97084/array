#include<iostream>
using namespace std;

int lastOccurence(int arr[],int n, int key){
    int s=0,ans=-1;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1; //for last occurence
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}


int main(){
    int arr[8]={2,3,4,5,5,5,5,5};

    int lastIndex=lastOccurence(arr,8,5);
    cout<<"last occurence of 5 at index is:"<<lastIndex;
    cout<<endl;
    
}