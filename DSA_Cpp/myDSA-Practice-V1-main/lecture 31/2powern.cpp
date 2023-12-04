#include<iostream>
using namespace std;

int powerOf2(int n){

    if(n == 0){
        return 1;
    }

   int smallerProblem = powerOf2(n-1);
   int bigProblem = 2 * smallerProblem;
   return bigProblem;

    // return 2 * powerOf2(n-1);
}

int main()
{
    int n ;
    cin>>n;
    cout<<endl;
    int ans = powerOf2(n);
    cout<< ans;
    return 0;
}