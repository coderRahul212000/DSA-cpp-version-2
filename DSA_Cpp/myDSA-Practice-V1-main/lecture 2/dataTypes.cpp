#include <iostream>
using namespace std ;

int main (){

    int a = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl ;

    bool b1 = true;
    cout<< b1 <<endl;

    bool b2 = 1;
    cout<< b2 << endl ;

    float f = 1.2;
    cout<< f << endl;

    double d = 1.23;
    cout<< d << endl;

    cout<< "size of integer "<< sizeof(a) <<endl;
    cout<< "size of char "<< sizeof(b) <<endl;
    cout<< "size of bool "<< sizeof(b1) <<endl;
    cout<< "size of float "<< sizeof(f) <<endl;
    cout<< "size of double "<< sizeof(d) <<endl;

}