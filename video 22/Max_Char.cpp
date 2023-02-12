//Return Maximum occuring character in a string
#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    //create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }

    //find maximum ocurance
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main(){

    string s;
    cout<<"Enter the String to count characters: ";
    cin>>s;

    cout<<"Maximum occuring character is: "<<getMaxOccCharacter(s);

    return 0;
}