// #include<iostream>
// #include<vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){

    vector<int>arr{ 1, 5, 8, 9, 6,-60, 7, 3, 4, 2, 0 };
    
    arr.push_back(120);

    int mx=INT_MIN;
    int mini=INT_MAX;

    for(int i=0 ; i<arr.size() ; i++){
      cout<<arr[i]<<" "<<endl;
      mx=max(mx,arr[i]);
      mini=min(mini,arr[i]);
    }

    sort(arr.begin(),arr.end());

    for(int i=0 ; i<arr.size() ; i++){
      cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<arr.capacity()<<endl;
    cout<<arr.size()<<endl;
    cout<<"largest number in the array is:"<<mx<<endl;
    cout<<"sortest number in the array is:"<<mini<<endl;
    
}