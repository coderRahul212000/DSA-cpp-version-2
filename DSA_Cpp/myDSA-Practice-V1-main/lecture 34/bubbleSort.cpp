#include<iostream>
using namespace std;

void arraySort(int arr[], int n){
    if(n==0 || n == 1) return;

    //1 case solve krna tha
    for(int i = 0 ; i < n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    arraySort(arr,n-1);
}

int main()
{
    int arr[5] = {5,6,3,4,1};
    arraySort(arr,5);
    for(int i = 0 ; i < 5; i++){
        cout<<arr[i]<< " ";

    }
    return 0;
}