//Linear Search using recursion
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    //base case
    if(size == 0)
        return false;

    if(arr[0] == key)
        return true;
    else{
        bool reminingPart = linearSearch(arr+1, size-1, key);
        return reminingPart;
    }

}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    bool ans = linearSearch(arr,size,key);
    cout<<endl<<endl;
    if(ans){
        cout<<"Key is Present";
    }
    else{
        cout<<"Key is Absent";
    }
    cout<<endl<<endl;

    return 0;
}