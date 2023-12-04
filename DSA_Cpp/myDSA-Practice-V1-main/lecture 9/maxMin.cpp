#include<iostream>
using namespace std;

int max(int arr[], int size){


    int maxi = INT_MIN;
    
    for( int i = 0 ; i < size ; i++){

        // if( max < arr[i]){
        //     max = arr[i];
        // }

        maxi = max(maxi, arr[i]);
    }

    return maxi;

}

int min(int arr[], int size){


    int mini = INT_MAX;
    
    for( int i = 0 ; i < size ; i++){

        // if( min > arr[i]){

        //     min = arr[i];
        // }


        mini = min(mini, arr[i]);
    }
 
    return mini;

}

int main(){

    int arr[100];
    int n;

    cout<<"please enter how many elements you want to put in array:- "<<endl;
    cin>>n;

    //taking inputs in array

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];


    }

    cout<<"Minimum value of the array is : "<< min(arr,n) <<endl;
    cout<<"Maximum value of the array is : "<<max(arr,n)<<endl;

    return 0;
}