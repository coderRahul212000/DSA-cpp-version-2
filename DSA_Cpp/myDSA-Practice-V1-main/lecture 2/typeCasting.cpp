#include<iostream>
using namespace std;

int main(){
    
    int a = 1;
    cout << a << endl;

    int b = 'a';   //implicit typecasting
    cout << b << endl;
    
    char ch = 'a';
     cout<< ch <<endl;
   

     // 98 will automatically get typecasted to its corresponding character.
     char ch1 = 98; //implicit typecasting
     cout<< ch1 <<endl;

     
     char ch2 = 123456;
     cout<< ch2 << endl;
     
    return 0;
}