#include <iostream>
using namespace std;

int totalNumOfSetBits(int a, int b){
    int count = 0;

    while(a != 0){

        if(a&1){
            count++;
        }

        a = a>>1;
    }

    while(b != 0){

        if(b&1){
            count++;
        }

        b = b>>1;
    }

    return count;


}

int main(){

    int a, b;
    cout<<"Please enter a and b\n";

    cin>>a>>b;

    cout<<totalNumOfSetBits(a,b);

    return 0;
}