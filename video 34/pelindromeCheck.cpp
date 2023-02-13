//recursion to check if given string is pelindrome or not
#include<iostream>
using namespace std;
/*
//using two pointers
bool checkPalindrome(string str, int i, int j){
    //base case 
    if(i>j)
        return true;

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome(str,i+1,j-1);
    }
}
*/
//using one pointer only
bool checkPalindrome(string str,int i){
    //base case 
    if(i>(str.length()-1))
        return true;

    if(str[i] != str[str.length()-i-1]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1);
    }
}


int main(){

    string name = "aabbccbbaa";

    bool isPalindrome = checkPalindrome(name,0);
    cout<<endl<<endl;
    if(isPalindrome){
        cout<<"Its a Palindrome";
    }
    else{
        cout<<"its NOT a Palindrome";
    }
    cout<<endl<<endl;

    return 0;
}