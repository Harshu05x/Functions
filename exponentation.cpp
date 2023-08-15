#include <iostream>
using namespace std;

// T.C. = O(logb)
int fast_expo(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1){      // if b is odd
            ans *= a;
        }
        a = a*a;
        b >>= 1;        // right shift to divide b by 2
    }
    return ans;
}

// T.C. = O(b)
int slow_expo(int a, int b){
    int ans = 1;
    while(b > 0){
        ans *= a;
        b--;
    }
    return ans;
}
                   
int main()
{
    cout<<slow_expo(5,4)<<endl;
    cout<<fast_expo(5,4)<<endl;
    return 0;
}