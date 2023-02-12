#include<iostream>
using namespace std;

int power(int n){
    if(n == 0){
        return 1;
    }

    return 2 * power(n-1);
}

int main(){

    cout<<endl<<"Enter the power: ";
    int n;
    cin>>n;

    int ans  = power(n);

    cout<<"Answer = "<<ans<<endl;

    return 0;
}