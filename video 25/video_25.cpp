//Pointers Part - 1

//Every Pointer is holds same space in memory(no matter what data type) --> in general its 8 byts

#include<iostream>
using namespace std;

int main(){

    /*
    int num=5;
    int *p;
    p = &num;

    cout<<"The Value of num is: "<<num<<endl;
    cout<<"The Address of num is: "<<p<<endl;
    cout<<"The size of num is: "<<sizeof(num)<<endl;
    cout<<"The size of pointer is: "<<sizeof(p)<<endl;
    */
   /*
   char ch = 'a';
   char * ptr = &ch;
   ch++;
   cout<<*ptr<<endl;
    */

   int a = 7;
   int *c = &a;
   c = c + 3;
   cout<< c <<endl;


    return 0;
}