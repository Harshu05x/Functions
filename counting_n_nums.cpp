#include <iostream>
using namespace std;

void counting(int n){
    for(int i = 1; i < n+1; i++)
        cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
    counting(n);

    return 0;
}