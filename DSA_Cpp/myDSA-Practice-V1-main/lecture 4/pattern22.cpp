#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int nspaces = 0;
    int nstars = n;

    int i = 1;
    while(i <= n){
        
        //spaces printing
        int j = 1;
        while( j <= nspaces){
            cout<<" ";
            j++;
        }

        int k = 1;
        while( k <= nstars){

            cout<<"*";
            k++;

        }
        nspaces++;
        nstars--;
        i++;
        cout<<endl;
    }

    return 0;

}