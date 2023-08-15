#include <iostream>
using namespace std;

int set_bit(int num,int k){
    int mask = 1 << k;
    return num | mask; 
}
                   
int main()
{
    int num,k;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Enter bit to shift: ";
    cin>>k;

    cout<<"Num: "<<set_bit(num,k);
    return 0;
}