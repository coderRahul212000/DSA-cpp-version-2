#include<iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Please enter a value till you want to print the counting !!!"<<endl;
    cin>>n;

    int i = 1;
    for(; ;){

        if(i <= n){

            cout<<i<<endl;

        }else{

            break;
        }

        i++;
    }



    return 0;
}