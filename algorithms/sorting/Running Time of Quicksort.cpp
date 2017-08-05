#include <bits/stdc++.h>
using namespace std;

int insertionSort(vector<int> arr, int n)
{
    int shifts = 0;
    for(int i=1; i<n; i++){
        int v = arr[i];
        int j= i;
        while(j > 0 && arr[j-1] > arr[j]){
            int tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            shifts++;
            j--;
        }
    }
    return shifts;
}

int partition(vector<int> &arr, int l, int h, int &swaps)
{
    int p = arr[h];
    int s = l;
    for(int i=1;i<h;i++){
        if(arr[i] <= p){
            int temp = arr[s];
            arr[s++] = arr[i];
            arr[i] = temp;
            swaps++;
         }
    }
    int tmp = arr[s];
    arr[s] = arr[h];
    arr[h] = tmp;
    swaps++;
    return s;
}

void quickSort(vector<int> &arr, int l, int h, int &swaps)
{
    if (l < h)
    {
        int p = partition(arr, l, h, swaps);
        quickSort(arr, l, p - 1, swaps);
        quickSort(arr, p + 1, h, swaps);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < (int)n; ++i)
    {
        cin >> arr[i];
    }

    int shifts = insertionSort(arr, n);
    int swaps = 0;
    quickSort(arr, 0, n - 1, swaps);
    cout << shifts - swaps << "\n";

    return 0;
}