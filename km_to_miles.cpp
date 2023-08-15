#include <iostream>
using namespace std;

void convert(int km){
    cout<<km*0.621;
}                   
int main()
{
    int km;
    cout<<"Enter km: ";
    cin>>km;
    convert(km);
    return 0;
}