#include<iostream>
using namespace std;

int power(int a , int b){



    int ans = 1;

    for( int i = 1 ; i <=b ; i++){

        ans = ans * a;

    }

    return ans;

}

int main(){

    int a , b;
    cout<<" Please enter a value"<<endl;
    cin>>a;

    cout<<" Please enter the power"<<endl;
    cin>>b;

    cout<<"Power of a^b = "<< power(a,b);
}