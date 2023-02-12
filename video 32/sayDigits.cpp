// if i/p is 412 
//then print --> four one two

#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n == 0)
        return ;
    
    //processing
    int digit = n%10;
    n = n / 10;

    //recurssive call
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";
}

int main(){

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<endl<<endl<<"Enter the Number: ";
    int n;
    cin >> n;

    cout<<endl<<"Your requried output is: ";
    sayDigit(n,arr);
    cout<<endl<<endl<<endl;

    return 0;
}