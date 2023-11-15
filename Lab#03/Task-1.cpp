#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for(int i = 1; i < n; i++) 
    {
        int key = arr [i];
        int j = i - 1;
    while (j >= 0 && key < arr[j]) 
    {
        arr[j + 1] = arr[j];
        --j; 
    }
        arr[j + 1] = key;
    }
}
int main()
{
    int n;
    cout<<" Please enter the size of array: "<<endl;
    cin>> n;

    int *arr = new int [n];

    cout<< "Enter "<<n<<" intergers"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    insertion_sort(arr, n);

    cout<<"sorted array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}