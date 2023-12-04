#include<iostream>
using namespace std;

bool isPresent( int arr[], int s, int e,int key){
    if(s > e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key) return true;
    else{
        if(arr[mid]>key) {
            return isPresent(arr,s,mid-1,key);
        }else{
            return isPresent(arr, mid+1,e,key);
        }
    }
}

int main()
{
    int arr[6] = {2,4,6,10,14,18};
    int key = 3;

    bool ans= isPresent(arr,0,5,key);

    if(ans) cout<<"key is present";
    else cout<<"key is not present";


    return 0;
}