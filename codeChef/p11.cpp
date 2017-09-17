// Refer p11.py for ques

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    int count = 0;
    cin >> num;
    int arr[num];

    for (int i = 1; i < num+1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        count += i;
    }

    if (count == sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}