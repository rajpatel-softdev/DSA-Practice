//Quick Sort using recursion
#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];

    //for counting smaller element than pivot
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //placing pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    //adjusting left and right part
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e){

    //base case
    if(s >= e)
        return;

    //for Partition 
    int p = partition(arr,s,e);

    //for left part
    quickSort(arr,s,p-1);

    //for right part
    quickSort(arr,p+1,e);

}

int main(){

    int arr[5] = {3,7,2,1,9};
    int size = 5;

    cout<<endl<<endl;
    cout<<"Before Sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    quickSort(arr,0,size-1);

    cout<<"After Sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}