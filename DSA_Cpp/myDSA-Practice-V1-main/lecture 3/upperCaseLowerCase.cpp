#include<iostream>
using namespace std;

int main (){

    char ch;
    cin>>ch;

    if( ch >= 'a' && ch <= 'z'){

        cout<<"This is lowercase character /n";

    }else if( ch >= 'A' && ch <= 'Z'){

        cout<<"This is upper case character /n";

    }else if( ch >= '0' && ch <= '9'){
       
       cout<<" This is a digit /n";
       
    }


    return 0;
}