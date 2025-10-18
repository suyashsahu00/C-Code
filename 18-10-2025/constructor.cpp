#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
public:
    student(string n,int a){
        name = n;
        age = a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    student s1 ("Suyash",21);

    s1.display();

    return 0;

}
