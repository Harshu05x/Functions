#include <iostream>
using namespace std;

int facto(int n){
    int mul = 1;
    if(n == 0 || n == 1)
        return 1;
    else{
        for(int i = 1; i <= n; i++)
            mul *= i;
        return mul;
    }
}                   
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Factorial: "<<facto(num);
    return 0;
}