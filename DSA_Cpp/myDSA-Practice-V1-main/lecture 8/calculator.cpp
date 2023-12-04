#include<iostream>
using namespace std;

int main(){


    int a,b;
    cout<<" please enter value of numbers "<<endl;
    cin>>a>>b;

    char op;
    cout<<" Please type the operation you want to perform on these numbers "<<endl;
    cin>>op;
    
    switch(op){

     case '+': cout<< (a+b)<<endl;
               break;

     case '-' : cout<< (a-b)<<endl;
                break;

     case '/' : cout<< (a/b)<<endl;
                break;

     case '*' : cout<< (a*b)<<endl;
                break;

     default: cout<<"Please enter a valid operation "<<endl;       

    }

    return 0;
}