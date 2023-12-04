#include<iostream>
using namespace std;

int fibonnaciSeriesNthNumber(int n){

    int a = 0;
    int b = 1;
    int c = a+b;

    for( int i = 1 ; i <=n ;i++){

        if(i == n){
            return a;
        }
        
        a=b;
        b=c;
        c=a+b;
    }
}

int main()
{
    int n ;
    cout<<"Type the nth number you want in the fibonnaci series\n";
    cin>>n;

    cout<<fibonnaciSeriesNthNumber(n);
    return 0;
}