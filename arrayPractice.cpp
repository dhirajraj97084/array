#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 6, 8, 2, 1, 0,78,56,34,123};

    int n = sizeof(arr) / 4;
    int mx=INT8_MIN;
    int mini=INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } 

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
         mini=min(mini,arr[i]);
    } 
    cout<<"maximum:"<<mx<<endl;
    cout<<"minimum:"<<mini<<endl;
    cout << endl;
    

     cout << "greater than 50:"<<endl;
     for (int i = 0; i < n; i++)
    {
        if(arr[i]>50){
            cout << arr[i] << " "; 
            int add_2=(arr[i]+2);
            cout<<add_2<<endl;
        }
    } 

    cout << endl;
    
}