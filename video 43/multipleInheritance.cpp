//Multiple Inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
        int age;
        int weight;
    
    public:
        void bark(){
            cout << "Barking...." <<endl;
        }

};

class Human{
    public:
        string color;
    
    public:
        void speak(){
            cout << "Speaking...." <<endl;
        }
};

//multiple Inheritance
class Hybrid : public Animal, public Human{

};

int main(){
    cout << endl;

    Hybrid obj1;
    obj1.bark();
    obj1.speak();  

    cout << endl;
    return 0;
}