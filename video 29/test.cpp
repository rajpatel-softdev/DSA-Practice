// Leetcode problem 739

#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{

    // by brute force
    /*
    vector<int> res(temperatures.size());
    for(int i=0; i<temperatures.size(); i++){
        for(int j=i; j<temperatures.size(); j++){
            if(temperatures[i] < temperatures[j]){
                res[i] = j-i;
                break;
            }
        }
    }
    return res;
    */

    stack<int> helperStack;
    int n = temperatures.size();
    vector<int> res(n);

    for (int idx = n - 1; idx >= 0; idx--)
    {
        while (!(helperStack.empty()) && temperatures[helperStack.top()])
        {
            helperStack.pop();
        }
        if (!helperStack.empty())
        {
            res[idx] = helperStack.top() - idx;
        }
        helperStack.push(idx);
    }
    return res;
}

int main()
{

    return 0;
}