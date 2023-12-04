#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"please enter the value of a :"<<endl;
    cin>>a;

    // if(a > 0){

    //     cout<<" a is a positive number."<<endl;

    // }else{

    //     if( a == 0){

    //         cout<< "a is 0. "<<endl;
            
    //     }else{

    //         cout<<" a is -ve. "<<endl;
    //     }

    // }

    if( a > 0){

        cout<<" a is a positive number \n";

    }else if( a==0){

        cout<<" a is 0 \n ";

    }else{ 

        cout<<" a is negative number \n";

    }

    return 0;
}