#include<iostream>
using namespace std;

void printCounting(int n){

    for(int i = 1; i<= n ; i++){
        cout<<i<<" ";
    }
}

int main(){
    
    cout<<" Please enter a value to print counting till that number : "<<endl;

    int n ;
    cin>>n;

    printCounting(n);

    return 0;
}