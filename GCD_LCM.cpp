#include <iostream>
using namespace std;

// Euclid's Algo for gcd - 
// GCD(a,b) = GCD(a-b,b) if a > b
//          = GCD(b-a,a) if b > a
int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    while(a != 0 && b != 0){
        if(a > b){
            a = a - b;
        }
        else b = b - a;
    }
    return a == 0 ? b : a;
}

// LCM(a,b) * GCD(a,b) = a*b
int lcm(int a, int b){
    int axb = a * b;
    int GCD = gcd(a,b);
    int LCM = (axb) / GCD;
    return LCM;
}
                   
int main()
{
    int a , b;
    cout<<"Enter A: "; cin>>a;
    cout<<"Enter B: "; cin>>b;
    cout<<"GCD: "<<gcd(a,b)<<endl;
    cout<<"GCD: "<<lcm(a,b)<<endl;
    return 0;
}