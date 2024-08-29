#include <bits/stdc++.h>
using namespace std;

vector<int> arraySum(int *arr, int n)
{
    vector<int> count(2, 0);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
            count[0]++;
        else
            count[1]++;
    }
    return count;
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
    cout << "Number of even Elements of array = " << sum[0] << endl;
    cout << "Number of odd Elements of array = " << sum[1] << endl;

    delete[] arr;

    return 0;
}