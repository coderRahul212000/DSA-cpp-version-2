#include<iostream>
using namespace std;

int main(){
    
    int n ;
    cin>>n;

    int i = 1;
    while( i <= n){
        char ch = 'A'+ i - 1;
        int j = 1;
        while( j <= i){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}



//2nd solution

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//             char val = 'D';
//             char copy=val;
//     for(int i = 1; i <= 4; i++){
            
//         for(int j = 1; j <= i; j++){
//             cout<<copy++;
                    
           
//         }
        
//         val--;
//         copy = val;
        
        
        


            
            
        
        

//         cout<<endl;
//     }
//     return 0;
// }
