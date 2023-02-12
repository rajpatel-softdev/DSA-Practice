#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum  = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cout << "ENter the size of Array: " ;
    cin >> n;

    //creating array in heap memory
    int* arr = new int[n];

    //Taking input
    cout <<endl <<"Enter the elements of Array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);

    cout << endl << "Answer is: " <<ans<<endl<<endl;

    return 0 ;
}