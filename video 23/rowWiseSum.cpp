//finding rwo wise sum of elements in 2D array

#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3], int rows, int cols){
    for(int row=0; row<rows; row++){
        int sum = 0;
        for(int col=0; col<cols; col++){
            sum += arr[row][col];
        }
        cout<<"The Sum of Row no. "<<row<<" is: "<<sum<<endl;
    }
}

void colWiseSum(int arr[][3], int rows, int cols){
    for(int col=0; col<cols; col++){
        int sum = 0;
        for(int row=0; row<rows; row++){
            sum += arr[row][col];
        }
        cout<<"The Sum of Column no. "<<col<<" is: "<<sum<<endl;
    }
}

int largestRowSum(int arr[][3], int row, int col){
            
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The Maximum sum is: "<<maxi<<endl;
    return rowIndex;
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

    //rowWiseSum(arr, 3, 3);
    int ansRow = largestRowSum(arr,3,3);
    cout<<"Max rwo Index is: "<<ansRow;

    return 0;
}