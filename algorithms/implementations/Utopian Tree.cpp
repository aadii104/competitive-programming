#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int height = 1;

        int k;
        cin >> k;
        for (int j; j <= k; j++)
        {
            if (j % 2 == 1)
            {
                height *= 2;
            }
            else
            {
                height++;
            }
        }
        arr[i] = height;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}