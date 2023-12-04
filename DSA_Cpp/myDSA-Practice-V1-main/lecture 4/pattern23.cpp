#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int nspaces = 0;
    int nstars = n;
    int i = 1 ;
    int val = 1;
    while( i <= n){
         
        //spaces
        int j = 1;
        while( j <= nspaces){
            cout<<" ";
            j++;
        }

        //value
        int k = 1;
        while( k <= nstars){
            cout<<val;
            k++;
        }
        cout<<endl;
        i++;
        nspaces++;
        nstars--;
        val++;
    }
    return 0 ;
}