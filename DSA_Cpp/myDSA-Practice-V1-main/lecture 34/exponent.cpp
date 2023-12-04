#include<iostream>
using namespace std;

int exponent(int a , int b){
    if(b == 0) return 1;

    if(b == 1) return a;

    int ans = exponent(a,b/2);

    if(b&1) return ans*ans*a;
    else return ans*ans;
}

int main()
{
    int a = 2;
    int b = 5;

    cout<<"a to the power b is = "<< exponent(a,b);
    return 0;
}