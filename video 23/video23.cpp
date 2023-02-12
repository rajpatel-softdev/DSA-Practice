// creation of 2D array: (data_type) (Arr_name)[Row][column]
//while passing 2D array in function we need to specify the number of columns 
//Searching element is 2D array --> search_in_2D_arr.cpp
//Finding Row wise Sum --> rowWiseSum.cpp
//Largest rwo sum is also in above code
//Coding Ninja --> print a wave --> https://bit.ly/329Le3K
//LeetCode --> Spiral Mtrix/Print --> Problem 54
//Homework --> LeetCode --> Rorate Image --> Problem 48
//Binary Search in 2D Array --> Leetcode --> Problem 74
//Look how 2D arrays are stored in memory(helpfull)
//Leetcode --> Search in 2D matrix part 2 --> problem 240


#include<iostream>
using namespace std;

int main(){

    //creating a 2D array
    int arr[3][4];

    //taking input (row wise)
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }

    //taking input (col wise)
    /*for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }*/

    //printing 2D array
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}