#include <iostream>
using namespace std;


// Here we use pass by value which means
// creating a copy don't pass actual val
// In pass by value concept whatever changes we made in func are dont relfect in main func
void print(int a){
    cout<<"address of A: "<<&a<<endl;
    cout<<"Inside func A: "<<a<<endl;
    a++;
    cout<<"Inside func A: "<<a<<endl;
}
                   
int main()
{
    int a = 5;
    cout<<"Outside func A: "<<a<<endl;
    cout<<"address of A: "<<&a<<endl;
    print(a);
    cout<<"Outside func A: "<<a<<endl;
    return 0;
}