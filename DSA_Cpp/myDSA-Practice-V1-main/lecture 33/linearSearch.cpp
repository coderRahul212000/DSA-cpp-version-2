#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int k){

   if(size == 0){
    return false;
   }

   if(arr[0]==k) return true;
   else{
     bool ans = isPresent(arr+1,size-1,k);
     return ans;
   }
}

int main()
{
    int arr[5] = {3,5,1,2,6};
    int key = 6;
    bool ans = isPresent(arr,5,key);

    if(ans) cout<<" Key is present";
    else cout<<"Key is absent";

    return 0;
}