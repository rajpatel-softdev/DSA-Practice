//finding power using recursion
#include<iostream>
using namespace std;

int power(int num,int pow){
    
    //base case
    if(pow == 0)
        return 1;
    
    if(pow == 1)
        return num;
    
    //RECURSIVE CALL
    int ans = power(num,pow/2);
    
    //if pow is EVEN
    if(pow%2 ==0){
        return ans * ans;
    }
    else{
        //pow is ODD
        return num * ans * ans;
    }

}

int main(){
    int num,pow;
    cout<<endl<<endl;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the Power: ";
    cin>>pow;

    int ans = power(num,pow);

    cout<<endl<<"Answer = "<<ans<<endl<<endl;

    return 0;
}