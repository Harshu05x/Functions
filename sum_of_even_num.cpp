#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;

    for(int i = 2; i <= n; i += 2)
        sum += i;
    // for(int i = 0; i < n+1; i++){
    //     if(i % 2 == 0)
    //         sum += i;
    // }
    return sum;
}                   
int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
    cout<<"Sum: "<<sum(n);
    return 0;
}