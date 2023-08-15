#include <iostream>
using namespace std;

void print(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n > 1000)
        return;
    for(int i = 1; i < n+1; i++)
        cout<<i<<"] Harsh\n";
}

int main()
{
    print();

    return 0;
}