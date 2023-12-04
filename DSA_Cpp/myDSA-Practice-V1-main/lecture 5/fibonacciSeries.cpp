#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
   
   int a = 0, b = 1;

   for( int i = 1 ; i <=n ; i++){

    int sum = a+b;

    cout<<a<<" ";

    a=b;
    b=sum;
    
   }

    return 0;
}