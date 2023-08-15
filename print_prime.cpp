#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// 1] Navie Approach                        T.C. = O(n^2)
bool is_prime(int n){
    if(n == 0 || n == 1)
        return 0;
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

// 2] Sqrt Approach                         T.C. = O(n*sqrt(n))
bool is_prime_01(int n){
    if(n == 0 || n == 1)
        return 0;
    else{
        for(int i = 2; i < sqrt(n); i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

// 3] Sieve of Eratosthenes                 T.C. = O(n*(log*(logn)))
int countPrimes(int n) {
    if(n == 0 || n == 1) return 0;
    vector <bool> prime(n,true); // all are marked as prime already
    int count = 0;
    prime[0] = prime[1] = false;

    for(int i = 2; i < prime.size(); i++){
        if(prime[i]){
            count++;

            int j = 2 * i;
            while(j < n){
                prime[j] = false;
                j += i;
            }
        }

    }
    return count;

}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    for(int i = 2; i < num; i++)
        if(is_prime(i)) cout<<i<<" "; 
    cout<<endl; 
    return 0;
}