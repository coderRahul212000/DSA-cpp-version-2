#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int div = 2;

    bool isPrime = true;

    while( div < n ){

        if ( n % div == 0){

            isPrime = false;
            break;

        }

        div++;

    }

    if( isPrime == true){
        cout<< " Number is a prime number "<<endl;
    }else{
        cout<<" Number is not prime number "<<endl;
    }
}