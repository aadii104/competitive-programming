#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void divide(auto arr){
    int length = arr.size()-1;
    int p = arr.front();
    arr.erase(arr.begin());

    vector<int> left;
    vector<int> right;
    int i,n;
    for(i=0; i< length; i++){
        (arr[i] >p )? right.push_back(arr[i]) : left.push_back(arr[i]);
    }
    for(i=0,n = left.size(); i <n; i++){
        cout << left[i] << " ";
    }
    cout <<p << " ";
    for (i = 0, n = right.size(); i < n; i++)
    {
        cout << right[i] << " ";
    }
    cout << "\n";
}
int main (){
    vector<int> arr;
    int arrSize;
    cin >> arrSize;
    for(int i=0; i< arrSize; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    divide(arr);

    return 0;
}