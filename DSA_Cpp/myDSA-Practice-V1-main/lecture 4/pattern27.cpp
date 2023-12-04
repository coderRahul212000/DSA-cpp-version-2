#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int nstars = 0;

    int nspaces = n;

    int i = 1;
    while( i <= n){
        int val=1;
        //spaces
        int j = 1;
        while( j <= nspaces){
            cout<<val<<" ";
            j++;
            val++;
        }
        val--;

        //stars
        int k = 1;
        while( k <= nstars){
            cout<<"* ";
            k++;
        }

        //spaces
        int l = 1;
        while( l <= nspaces){
            cout<<val<<" ";
            l++;
            val--;
        }

        i++;
        cout<<endl;
        nstars+=2;
        nspaces--;
    }
    return 0;
}