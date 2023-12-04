#include<iostream>
using namespace std;

bool isPrime(int n){

    bool IsPrime = true;

    for(int i = 2 ; i < n ; i++){

        if(n%i == 0){
            IsPrime = false;
        }
    }

    return IsPrime;
}


int main(){

    int n;
    cout<<"please enter a value to see whether it's prime or not !"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"Number is a prime number"<<endl;
    }else{
        cout<<"Number is not prime number"<<endl;
    }



    return 0;
}
