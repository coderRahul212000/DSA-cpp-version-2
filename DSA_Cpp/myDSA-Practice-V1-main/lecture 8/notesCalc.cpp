#include<iostream>
using namespace std;

int main(){
   
    int n;
    cout<<"Please enter a currency amount "<<endl;
    cin>>n;
    
    int balance = 0;
    

    switch (100)
    {
    case 100:   cout<<"100 notes = "<< n/100 <<endl;
                balance = n - ((n/100)*100);

                cout<<balance<<endl;
                n = balance;
                

    case 50:  cout<<"50 notes = "<< n/50 <<endl;
              balance = n - ((n/50)*50);

              cout<<balance<<endl;
              n = balance;
                

    case 20:   cout<<"20 notes = "<< n/20 <<endl;
              balance = n - ((n/20)*20);


              cout<<balance<<endl;
              n = balance;
               

    case 1:   
             cout<<"1 notes = "<< n/1 <<endl;
              balance = n - ((n/1)*1);


              cout<<balance<<endl;
              n = balance;
                          
    
    default: cout<<"enter denominations not outside the constraint";
        
    }

    return 0;
}