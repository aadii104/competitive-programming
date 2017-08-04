#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void insertionSort(vector<int>& arr);
void printVec(vector<int> &arr);

int main(void)
{
    int n;
    cin >n;
    vector<int> arr(n);
    for(int i=0;i< n; i++){
        cin >> arr(i);
    }
    insertionSort(arr);
    return 0;
}

void insertionSort(vector<int>& arr){

    int vecSize = arr.size();
    int valToInsert = arr.back();
    bool notInseted = true;

    for(int i = vecSize-2; i>= 0; i--){
        if(arr[i]  >  valToInsert){
            arr[i+1] = arr[i];

            printVec(arr);
        }else{
            arr[i+1] = valToInsert;
            printVec(arr);
            notInserted = false;
            break;
        }
    }
    if(notInserted){
        arr[0] = valToInsert;
        printVec(arr);
    }

}
void printVec(vector<int>& arr){
    for(int i=0, n=arr.size();i<n ; i++){
        cout << arr[i] << " ";
    }cout << "\n";
}