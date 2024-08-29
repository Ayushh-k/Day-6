#include <bits/stdc++.h>
using namespace std;

vector<int> arraySum(int *arr, int n)
{
    vector<int> sum(2, 0);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
            sum[0] += arr[i];
        else
            sum[1] += arr[i];
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

    vector<int> sum = arraySum(arr, n);
    cout << "Sum of even Elements of array = " << sum[0] << endl;
    cout << "Sum of odd Elements of array = " << sum[1] << endl;

    delete[] arr;

    return 0;
}