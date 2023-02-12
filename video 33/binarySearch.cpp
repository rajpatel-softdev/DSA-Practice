//binary search using recursion
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    //base case
    if(e>s)
        return false;
    
    int mid = s + (e-s)/2;

    //elmenet found
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 14;

    bool ans = binarySearch(arr,0,5,key);
    cout<<endl<<endl;
    if(ans){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is Absent";
    }
    cout<<endl<<endl;

    return 0;
}