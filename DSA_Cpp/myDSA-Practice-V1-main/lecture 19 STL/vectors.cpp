// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    // vector<int> v;
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    
    // v.push_back(1);
    
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    
    // v.push_back(2);
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    
    // v.push_back(3);
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    // cout<<"Size-->"<<v.size()<<endl;

    // cout<<"Element at 2nd Index"<< v.at(2)<<endl;
    
    // cout<<" front element "<<v.front()<<endl;
    // cout<<"back element "<<v.back()<<endl;
    
    // cout<<"before POP"<<endl;
    // for(int i : v){
    //     cout<<i;
    // }cout<<endl;
    
    // v.pop_back();
    
    // cout<<"After POP"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    
    
    // cout<<"before clear size"<<v.size()<<endl;
    // v.clear();
    // cout<<"after clear size"<<v.size()<<endl;
    
    
    vector<int> a(5,1);  //issai array 5 size ka hoga or saare elements 1 honge
    cout<<"Print A"<<endl;
    for(int i : a){
        cout<<i<<" ";
    }cout<<endl;
    
    
    //vector a ko copy kr re hai vector last mai
    
    vector<int> last(a);
    cout<<"Print Last"<<endl;
    for(int i : last){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}