#include <iostream>
using namespace std;

int reverse(int n){
    int num = 0;
    if(n > INT32_MAX)
        return 0;
    while(n > 0){
        num = (num*10) + n % 10;
        n /= 10;
    }
    return num;
}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<reverse(num); 
    return 0;
}