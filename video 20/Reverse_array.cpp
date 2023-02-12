#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){

    int s= 0, e = v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print_arr(vector<int> v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout<<"Your Original Array is: ";
    print_arr(v);

    vector<int> ans = reverse(v);

    cout<<endl<<"Your Reversed Array is: ";
    print_arr(ans);

    return 0;
}