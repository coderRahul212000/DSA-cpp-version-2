#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int nspaces = n-1;
    int nstars = 1;

    int i = 1;
    while( i <= n){
        
        int val = 1;
        //nspaces
        int j = 1;
        while(j <= nspaces){
           cout<<"  ";
           j++;
        }

        //nstars
        int k = 1;
        while( k <= nstars){
            cout<<val<<" ";
            k++;

            if(k <= (nstars/2)+1){
            val++;
         }else{
            val--;
        }

        }

        
        nstars+=2;
        nspaces--;
        i++;
        cout<<endl;

    }
    return 0;
}