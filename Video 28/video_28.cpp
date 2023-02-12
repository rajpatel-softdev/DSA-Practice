//Reference veriable 
// Static vs Dynamic Memory --> Part-1
// Understand STACK Vs. HEAP MEMORY(very IMP)
// Read documentations from coding studio
// Homework --> search about void pointers and address typecasting



#include<iostream>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n ){
    n++;
}

int main(){
    /*
    int i = 5;

    //creating a referance variable
    int& j = i;
    */
    
    int n = 5;
    
    cout << "Before Update 1: "<< n << endl;
    update1(n);
    cout << "After Update 1: " << n << endl;

    cout << "Before Update 2: "<< n << endl;
    update2(n);
    cout << "After Update 2: " << n << endl;
    


    return 0;
}