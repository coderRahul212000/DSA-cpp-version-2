#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<" value of a just after initialization : "<< a <<endl; //here i will get garbage value

    cin >> a;
    cout<<" value of a just after cin statement : " << a <<endl;

    return 0;
}