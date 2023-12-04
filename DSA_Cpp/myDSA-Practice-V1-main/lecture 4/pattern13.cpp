#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i <= n){
        char value = 'A';
        int j = 1;
        while(j <= n){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}