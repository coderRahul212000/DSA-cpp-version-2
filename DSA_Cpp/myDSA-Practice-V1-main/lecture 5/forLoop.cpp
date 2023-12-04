#include<iostream>
using namespace std;

int main(){
    
    int n ;
    cout<<"Please enter a value to print counting !!!";
    cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    // int i = 1;

    // for( ; i <= n; ){

    //     cout<<i<<endl;
    //     i++;
    // }


    int i = 1;
    for(;;){
        if(i <= n){          //issai infinite loop chal jayega
            cout<<i<<endl;
        }
        i++;
    }


    return 0;
}

