//Single Inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
        int age;
        int weight;
    
    public:
        void speak(){
            cout << "Speaking...." <<endl;
        }

};

class Dog : public Animal{

};

class germanSheperd: public Dog{

};

int main(){
    cout << endl;

    germanSheperd g;
    g.speak();
    cout << g.age <<endl;    

    cout<< endl;
    return 0;
}