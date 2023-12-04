#include<iostream>
using namespace std;


void reverse(char name[], int n){

    int s = 0;
    int e = n-1;

    while( s<e){
            swap(name[s++], name[e--]);

    }


}

int getLength( char name[]){

    int count = 0;
    for( int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }

    return count;

}


char getMaxOccCharacter(string s){

    int arr[26] = {0};
    
    //create an array of count of characters
    for( int i = 0 ; i < s.length(); i++){
        char ch = s[i];
        //lowercase
        int number = 0;
        
        number = ch - 'a';
        

        arr[number]++;
    }
    
    // find maximum occ character
    int maxi = -1, ans = 0;
    for( int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {

// {  char name[20];

//    cout<<"Enter your name\n";
//    cin>>name;

//    cout<<"Your name is ";
//    cout<<name<<endl;

//    int len = getLength(name);

//    cout<<"length: "<< len <<endl;

//    reverse( name, len);
//    cout<<"Your name is ";
//    cout<< name <<endl;

   
   string s;
   cin >> s;
   cout<< getMaxOccCharacter(s)<<endl;
    
   return 0;
}