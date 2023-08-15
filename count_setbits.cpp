// setbits - no of total 1's bit
// uisng & bitwise operator 1 & 1 gives 1 
// perform & operation and right shift the num

#include <iostream>
using namespace std;

int count(int n){
    int c = 0;
    while(n > 0){
        if(n & 1 == 1)  // perform and operation
            c++;
        n = n >> 1;     // right shift the num
    }
    return c;
}

int main()
{
    int num;
    cout<<"Enter num: "; 
    cin>>num;
    cout<<"Setbits: "<<count(num);  
    return 0;
}