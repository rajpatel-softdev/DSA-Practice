//start making default argumnet from right most argument


#include<iostream>
using namespace std;

void print(int arr[], int size, int start = 0){
    for(int i = start; i<size; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    cout << "without 3rd argument :" <<endl;
    print(arr,size);

    cout << "with 3rd argument :" <<endl;
    print(arr,size,2);

    return 0;
}