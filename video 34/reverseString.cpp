//reverse the given string using recursion
#include<iostream>
using namespace std;
/*
//using two pointers
void reverse(string& str, int i, int j){

    //base case
    if(i>j)
        return ;
    
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str,i,j);
}
*/

//using one pointer only
void reverse(string& str, int i){
    //base case
    if(i>(str.length()-i-1))
        return ;
    
    swap(str[i],str[str.length()-i-1]);
    i++;

    //recursive call
    reverse(str,i);
}

int main(){

    string name = "abcdefg";
    cout<<endl<<endl;
    cout<<"Before Reversing: "<<name<<endl;

    reverse(name,0);

    cout<<"After reversing: "<<name<<endl<<endl;


    return 0;
}