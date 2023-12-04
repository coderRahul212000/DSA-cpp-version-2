#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){

    int sum = 0;

    for( int i = 0 ; i < size ; i++){

        sum = sum + arr[i];

    }

    return sum;
}

int main(){
    
    int size ;
    cout<<"please enter the size of elements you want to enter "<<endl;
    cin>>size;

    int arr[100];


    for(int i = 0 ; i < size ; i++){

        cin >> arr[i];

    }
    

    cout<<"sum of array elements = "<< sumOfArray(arr, size);

    return 0;
}