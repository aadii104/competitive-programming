#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;
void insertionSort(int n, int arr[])
{
    int i, j, value;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && value < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(n,arr);

    return 0;
}