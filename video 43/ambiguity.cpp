//Inheritance Imbiguity
// :: --> scope resolution operator
#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout << "I am A" <<endl;
        }
};

class B{
    public:
        void func(){
            cout << "I am B" <<endl;
        }
};

class C : public A, public B{

};

int main(){
    cout << endl;

    C obj1;
    //obj1.func();    //Will be an error

    obj1.A :: func();    //for function of class A
    obj1.B :: func();    //for Fucntion of class B

    cout << endl;
    return 0;
}