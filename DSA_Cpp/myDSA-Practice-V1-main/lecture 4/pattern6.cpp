#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 1;
    int toPrint = n*n;

    while(i <= n){

        int j  = 1;
        while(j <= n){
            cout<<toPrint<<" ";
            toPrint--;
            j++;
        }
        i++;
        cout<<endl;
    }
}