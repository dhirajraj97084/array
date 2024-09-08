#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

  for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
  }
  return 0;
}

int main(){

 int arr[10]={3,77,2,-8,4,2,8,11,123,80};

 int key;
 cout<<"enter the element to search in the array:";
 cin>>key;

 int value=search(arr, 10 , key);
 if(value){
    cout<<"yes!, your element are present";
 }else{
    cout<<"no!, your element are not present";
 }


}