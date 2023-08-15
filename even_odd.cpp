#include <iostream>
using namespace std;

void even_odd(int n){
    (n % 2) == 0 ? cout<<"Even": cout<<"odd";
}

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
    even_odd(n);
    return 0;
}