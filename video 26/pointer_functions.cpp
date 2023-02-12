//Pointer and Functions --> Video 26
//pointer p of main fucntion and pointer p of update function are treated defferentlly
//we chane update the value of that pointer but not the address it self
//update of p is not possible in different function but update of *p is possible



#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p <<endl;
}
//see comments
void update(int *p){
    p = p + 1;
}

int main(){

    int value = 5;
    int *p = &value;

    //print(p);

    cout<<"Before: "<<p<<endl;
    update(p);
    cout<<"After: "<<p<<endl;

    return 0;
}