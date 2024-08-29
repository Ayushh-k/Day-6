#include <bits/stdc++.h>
using namespace std;

int arraySum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = arraySum(arr, n);
    cout << "Sum of Elements of array = " << sum << endl;
    delete[] arr;
    return 0;
}