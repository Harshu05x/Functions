#include <iostream>
using namespace std;


// if we are going to invoke a func then 
// we have to make sure that we have declared the func at least

int add(int ,int);  // func declareation
int main()
{
    int a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    int c = add(a,b);
    cout<<"Addition: "<<c;
    return 0;
}

// func defination
int add(int a,int b){
    return a+b;
}                   