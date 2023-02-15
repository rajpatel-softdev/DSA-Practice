//Inplimatation of Hybride Inharitance
#include<iostream>
using namespace std;

//Parent class 1
class Vehicle{
    public:
    Vehicle(){
        cout << "This is a Vehicle" << endl;
    }
};

//Parent class 2
class Fare{
    public:
        Fare(){
            cout << "Fare of Vehicle!!" << endl;
        }
};

//child class 1
class Bus : public Vehicle, public Fare{

};

//child class 2
class Car : public Vehicle{

};

int main(){
    cout << endl;
    //Creating Object of Sub Class will Invoke the Constructor of base class
    Bus obj2;


    cout << endl;
    return 0;
}