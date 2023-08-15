#include <iostream>
using namespace std;

void print(int n){
    while(n > 0){
        cout<<n % 10<<endl;
        n /= 10;
   }
}    
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    print(num); 
    return 0;
}