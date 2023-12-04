#include<iostream>
using namespace std;

class Animal{
    
    public:
    int age;
    int weight;

    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{

};

class GermanShephered: public Dog{

};

int main()
{
    GermanShephered g;
    g.speak();
    return 0;
}