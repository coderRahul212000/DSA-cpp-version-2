#include<iostream>
using namespace std;

int main(){
    

    int  n;
    cin >> n;

    int nspaces = n-1;
    int nstars = 1;
    int i = 1;
    int val = 1;

    while( i <= n){
        
        //nspaces
        int j = 1;
        while(j <= nspaces){
            cout<<" ";
            j++;
        }

        //nstars

        int k = 1;
        while(k <= nstars){
            cout<<val;
            k++;
        }

        nstars++;
        nspaces--;
        cout<<endl;
        i++;
        val++;
    }
    return 0;
}