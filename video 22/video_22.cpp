//Character Array and String
// Strings in C++ are 1-D Char Arrays
//Leetcode --> Problem 344
//Homework --> COding Ninja --> Palindrom --> https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633
//LeetCode --> Valid Pelindrom --> Problem 125
//Homework --> Reverse the words in the string --> Problem 186
//Q--> Return Maximum occuring character in a string --> Max_Char.cpp
// Search about cin.getline() adn custom delimeters 
//Coding Ninjas --> Replace Places --> https://bit.ly/3sfP71Q 
//LeetCode --> Remove All Occurrences of a Substring --> Problem 1910
//LeetCode --> Permutations in string --> Problem 567 --> Must of revision
//Homework --> Leetcode --> Remove all adjacent duplicates in String --> Problem 1047
//LeetCode --> String compression --> Problem 443




#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrom(char a[], int n){
    int s = 0;
    int e = n - 1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cout<<"Enter your Name: ";
    cin>>name;

    cout<<endl<<"Your Name is: ";
    cout<<name<<endl;

    int len = getLength(name);
    cout<<"Length : "<<len<<endl;

    reverse(name,len);

    cout<<endl<<"Your Name after reversal is: ";
    cout<<name<<endl;

    cout<<"Pelindrom or Not: "<<checkPalindrom(name,len)<<endl;
    return 0;
}