#include <iostream>
#include <stdlib.h>

using namespace std;
void insertionsort(int n, int arr[]){
    int i,j,value;
    int shifted =0;

    for (i=1; i<n; i++){
        value = arr[i];
        j =i-1;
        while(j>=0 && value < arr[j]){
            arr[j+1] = arr[j];
            j--;
            shifted++;
        }
        arr[j+1] = value;
    }
    cout << shifted << endl;
}

int main(){
    int N;
    cin >> N;
    int arr[N],i;
    for(i=0; i< N; i++){
        cin >> arr[i];
    }
    insertionsort(N,arr);
    return 0;
}