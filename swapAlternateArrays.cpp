#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i + 1], arr[i]);
        }
    }
}

int main()
{
    int e_arr[8] = {2, 5, 1, 9, 7, 6, 0, 6};
    int o_arr[5] = {5, 7, 9, 0, 9};
     swapAlternate(e_arr, 8);
    printArray(e_arr, 8);
   
    cout << endl;
     swapAlternate(o_arr, 5);
    printArray(o_arr, 5);
    cout << endl;
}