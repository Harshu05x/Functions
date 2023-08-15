#include <iostream>
using namespace std;

void fah_to_cel(int fah){
    cout<<"Celsius: "<<((float)fah-32)*5/9;
}
void cel_to_fah(int cel){
    cout<<"Fahrenheit: "<<((float)cel*9/5)+32;
}

int main()
{
    int num;
    cout<<"Enter: ";
    cin>>num;
    fah_to_cel(num); 
    return 0;
}