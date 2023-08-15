#include <iostream>
using namespace std;

char grade(int marks){
    // if(marks >= 90)
    //     return 'A';
    // else if(marks < 90 && marks >= 80)
    //     return 'B';
    // else if(marks < 80 && marks >= 70)
    //     return 'C';
    // else if(marks < 70 && marks >= 60)
    //     return 'D';
    // else
    //     return 'E';

    switch(marks/10){
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        case 0: return 'F'; break;
        default: return 'E'; break;
    }

}                   
int main()
{
    int marks;
    // cout<<"Enter marks: ";
    // cin>>marks;
    // cout<<"Grade: "<<grade(marks);

    for(int i = 1; i < 101; i++){
        cout<<i<<"] "<<grade(i)<<" ";
        if(i % 5 == 0)
            cout<<endl;
    }

    return 0;
}