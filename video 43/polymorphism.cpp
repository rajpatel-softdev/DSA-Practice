//Polymorphism

#include<iostream>
using namespace std;

class A{
    public:
        void sayHello(){
            cout << "Hello Raj Patel" <<endl;
        }

        int sayHello(char name){
            cout << "Hello Raj Patel" <<endl;
            return 1;
        }

        void sayHello(string name){
            cout << "Hello " << name <<endl;
        }
};

class X : public A{
    public:
        void sayHello(){
            cout << "Hello Raj" <<endl;
        }

};

class B{
    public:
        int a;
        int b;
    public:
        int add(){
            return a + b;
        }

        void operator+ (B &obj){
            int value1 = this->a;
            int value2 = obj.a;
            cout << "Output = " << value2 - value1 <<endl;

        }
};

class Animal{
    public:
        void speak(){
            cout << "Speaking...." << endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Barking..." << endl;
        }
};

int main(){
    cout << endl;

    Dog d;
    d.speak();

    /*
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj2 + obj1;
    */

    /*
    A obj1;
    obj1.sayHello();
    obj1.sayHello('a');
    obj1.sayHello("Name");
    
    cout << endl;
    X obj2;
    obj2.sayHello();
    */

    cout << endl;
    return 0;
}