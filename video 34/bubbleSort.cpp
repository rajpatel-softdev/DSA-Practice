//bubble sort using recursion 
#include<iostream>
using namespace std;

void sortArray(int arr[], int size){
    //base case
    if(size == 0 || size == 1)
        return ;
    
    //solving one case 
    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    sortArray(arr, size-1);
}

int main(){

    int arr[5] = {4,3,7,1,9};
    int size = 5;

    sortArray(arr,size);
    
    cout<<endl<<endl;
    cout<<"Array after sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}