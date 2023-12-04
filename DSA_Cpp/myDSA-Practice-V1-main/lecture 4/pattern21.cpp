#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int nstars = n;

    int i = 1;
    while( i<=n){
        
        int j = 1;
        while( j <= nstars){
            cout<<"* ";
            j++;
        }
        nstars--;
        i++;
        cout<<endl;
    }
    return 0;
}