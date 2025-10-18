#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;
    switch (i%2)
    {
    case 0:
        cout<<"The number is divisible by 2 and it is even";
        break;
    
    default:
        cout<<"The number is not divisible by 2 and it is odd.";
        break;
    }
    return 0;
}
