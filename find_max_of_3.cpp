#include <iostream>
using namespace std;

int find_max(int a,int b,int c){
    if(a > b){
        if(a > c)
            return a;
        return c;
    }
    else{
        if(b > c)
            return b;
        return c;
    }
}                  
int main()
{
    int a,b,c;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    cout<<"Max: "<<find_max(a,b,c);
    return 0;
}