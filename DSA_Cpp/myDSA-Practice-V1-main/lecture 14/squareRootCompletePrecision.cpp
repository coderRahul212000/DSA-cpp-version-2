#include<iostream>
using namespace std;

int getTempSol(int n){

    int s = 0;
    int e = n;
    long long int m = s + (e-s)/2;
    long long ans = -1;

    while(s<=e){

        long long int product = m * m;

        if(product == n){
            return m;
        }else if(product < n){
            ans = m;
            s = m + 1; 
        }else{  

            e = m -1;

        }
        
        m = s + (e-s)/2 ;

    }


    return ans;
}



double morePrecision(int n , int precision, int tempSol){

    double fact = 1;
    double ans = tempSol;

    for( int i = 0 ; i < precision; i++){
        
        fact = fact / 10 ;
        
        for(double j = ans; j * j < n; j = j + fact){

               ans = j;
             


        }

    }

           return ans;

}


int main(){
    int n;

    cout<<"Enter the number ";
    cin>>n;

    
     
    int tempSolution= getTempSol(n); 


    cout<< "Answer is "<< morePrecision(n, 3, tempSolution);

    return 0;
}