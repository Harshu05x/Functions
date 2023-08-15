#include <iostream>
using namespace std;
float pi = 3.1415;
float area(int r){
    return pi*r*r;
}                   
int main()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area: "<<area(r)<<endl;;
    return 0;
}