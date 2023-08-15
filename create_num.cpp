#include <iostream>
using namespace std;

int create(int n){
    int x[n],num = 0;
    for(int i = 0; i < n; i++){
        cout<<"Enter digit: ";
        cin>>x[i];
        num = (num*10) + x[i];
    }
    return num;
}                
int main()
{
    int n;
    cout<<"Enter total no of digits: ";
    cin>>n;
    cout<<"Number: "<<create(n)<<endl;

    return 0;
}