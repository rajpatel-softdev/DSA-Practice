//array is sorted or not ussing recurssion

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    
    //base case
    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        bool reminingPart = isSorted(arr+1, size-1);
        return reminingPart;
    }

}

int main(){

    int arr[5] = {1,4,5,8,9};
    int size = 5;
    
    bool ans = isSorted(arr,5);
    cout<<endl<<endl<<endl;
    if(ans){
        cout << "Array is sorted"<<endl;
    }
    else{
        cout << "Array is not sorted"<<endl;
    }
    cout << endl << endl;

    return 0;
}