#include <iostream>
using namespace std;

bool prime(int n){
    if(n == 0 || n == 1)
        return 0;
    else{
        int flag = 0;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}                  
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    for(int i = 0; i < 50; i++)
    prime(i) ? cout<<i<<"] Its prime\n" : cout<<i<<"] Its not prime\n"; 
    return 0;
}