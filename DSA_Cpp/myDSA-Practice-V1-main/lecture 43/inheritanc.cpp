#include<iostream>
using namespace std;

class Human {

    private:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge() {
        // return height;
        // return (*this).height;
        return this->height;
    }

    void setWeight(int w){
        this->weight = w;
    }

};

class Male: private Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight() {
        return this->height;
    }

};

int main()
{
    Male m1;

    cout<<m1.getHeight();
    
    return 0;
}