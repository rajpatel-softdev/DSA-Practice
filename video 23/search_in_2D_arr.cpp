//C program to seach an element in 2D array
//in 2D array it is requried to specify the number of columns 

#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][3];

    //taking input (row wise)
    cout<<"Enter 12 Elements in the Array: "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr, target, 3,3)){
        cout<<"Element found!!!!";
    }
    else{
        cout<<"Element not found!!";    
    }

    return 0;
}