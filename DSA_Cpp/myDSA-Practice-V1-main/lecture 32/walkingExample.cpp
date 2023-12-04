#include<iostream>
using namespace std;

void reachDest(int src, int dest){
     
    cout<<"src is : "<<src <<" and destination is "<<dest;
    cout<<endl;

    if(src == dest){
        cout<<"reached home";
        return;

    }

        src++;

        reachDest(src,dest);
}

int main()
{
    int src , dest;

    cin>>src >> dest;

    reachDest(src,dest);

    return 0;
}