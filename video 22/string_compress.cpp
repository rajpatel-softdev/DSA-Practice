//Leetcode Problem 443
#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {

    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n){
        int j = i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }

        //either new element is encountered 
        //OR array is fully traversed

        //to store oldChar
        chars[ansIndex++] = chars[i];

        int count = j-i;

        if(count>1){
            //converting numbers in to string(single digit) and storing
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){

    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('a');
    chars.push_back('a');

    cout<<"Your String is: ";
    for(int i = 0; i<chars.size(); i++){
        cout<<chars[i]<<" ";
    }

    int n=compress(chars);

    cout<<endl<<"Your Sorted String is: ";
    for(int i = 0; i<n; i++){
        cout<<chars[i]<<" ";
    }    
    cout<<endl;
    return 0;
}