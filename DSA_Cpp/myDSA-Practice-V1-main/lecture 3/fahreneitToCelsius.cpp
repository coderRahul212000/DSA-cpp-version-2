#include<iostream>
using namespace std;

int main(){
    
    float f;
    cin >> f;

    // c = 5/9 (f-32);

    float c = (5.0/9)*(f-32);
    cout << "Temp in celcius "<<c << endl;

    return 0 ;
}