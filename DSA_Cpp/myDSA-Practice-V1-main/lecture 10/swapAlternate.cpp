#include<iostream>
using namespace std;


void swapAlternate(int arr[], int size){

    for(int i = 0 ; i+1 < size ; i+=2){

        swap(arr[i], arr[i+1]);


    }
}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;

}

int main(){

    int evenArray[8] = {5, 2, 9, 4, 7, 6 , 1 , 0};
    int oddArray[5] = {11, 33, 9, 76, 43};

    swapAlternate(evenArray, 8);
    swapAlternate(oddArray, 5);

    printArray(evenArray, 8);
    printArray(oddArray, 5);
}