#include<iostream>
using namespace std;

bool isEven(int n){
  
  if(n&1){
    // number is odd
    return 0;
  }

  return 1; // if even

}



int main(){
    

    int n ;
    cin>>n;

    if((isEven(n))){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd"<<endl;
    }


    return 0;
}