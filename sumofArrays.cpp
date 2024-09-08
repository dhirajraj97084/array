#include <iostream>
using namespace std;
int main() {
   int n;
    int sum=0;
   cout<<"Enter the size of an Array:";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }
   cout<<endl;
   cout<<"sum of arrays is:"<<sum;
   return 0;
}