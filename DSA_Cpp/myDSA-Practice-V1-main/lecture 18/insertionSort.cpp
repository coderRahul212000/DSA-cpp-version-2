#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for( int i = 1; i < n; i++){
        // 1 sai isliye chalaya kyunki mai 0th element ko sorted maan ra hu
        int temp = arr[i];
        int j = i-1;

        for(; j>=0; j--){
            if(arr[j] > temp){
                //shift krna hai
                arr[j+1] = arr[j];
            }
            else{
                //ruk jo
                break;
            }
        }

        arr[j+1] = temp;
    }
}