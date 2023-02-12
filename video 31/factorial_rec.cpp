#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    cout<< endl<< "Enter the number : ";
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<endl<< "Factorial = "<<ans<<endl;

    return 0;
}