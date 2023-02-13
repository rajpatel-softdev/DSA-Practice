//merge sort using recursion
#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    //creating 2 arrays of len1 and len2
    int *first = new int[len1];
    int *second = new int[len2];

    //coping the values in first array
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    //in second array
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
     
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s, int e){

    //base case
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    //for solving left part
    mergeSort(arr,s,mid);

    //for solving right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

}

int main(){
    int start = clock();
    int arr[5] = {3,7,2,1,9};
    int size = 5;

    cout<<endl<<endl;
    cout<<"Before Sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr,0,size-1);

    cout<<"After Sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int end = clock();

    cout << endl << "Start = " << start;
    cout << endl << "End = " << start;
    return 0;
}