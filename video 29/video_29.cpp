//Dynamic Memory Allocation of 2D Arrays
//Homework --> Create Jaggered Array using dynamic memory


#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout << "Enter the number of Rows: ";
    cin >> row;
    cout << "Enter the Number of Columns: ";
    cin >> col;
    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input
    cout <<"Enter the elements: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    //Printing Array
    cout << "your Array is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}