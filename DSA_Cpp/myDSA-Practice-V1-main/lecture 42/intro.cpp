#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;
    

    public:
    char level;
    char *name;
    static int timeToComplete;

    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100]; // string dynamically
    }

    //Parametrised constructor
    Hero(int health){
       this->health =  health;
    }

    Hero( int health, char level){
        this->level = level;
        this->health = health;
    }
    

    //copy constructor
    Hero(Hero& temp){
        //deep copy
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;

     }

    void print(){
        cout<<endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

    //destructor
    ~Hero(){
        cout<< "destructor bhai called" <<endl;
    }

};

int Hero::timeToComplete = 5;

int main()
{    //accessing static members without object
    // cout << Hero::timeToComplete <<endl;
    // cout<<Hero::random()<<endl;

    //accessing static members with object but this is not prefered
    // cout << Hero::timeToComplete <<endl;
    // Hero a;
    // cout<< a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<b.timeToComplete<<endl; //10
    // cout<< a.timeToComplete<<endl; //10  koi bhi change kare static member ki value change hogi

      
    //static
    // Hero a;

    //Dynamically k case mai hume manually destructor call krna hota hai
    // Hero *b = new Hero;
    // delete b;


    Hero hero1;
    
    hero1.sethealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print(); 


    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;
    
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    // copy assignment operator usage
    // hero1.print();
    // hero2.print();

    // hero2 = hero1;


    //object created statically
    // Hero ramesh(10);
    // ramesh.print();

    // //dynamically object bnanar hu
    // Hero *h = new Hero(10);
    // h->print();






    return 0;
}