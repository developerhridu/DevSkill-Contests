#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr)
{
    // Finding the highest and lowest value of the array
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    vector<int> freq(high - low + 1);
    for (auto elem : arr)
        freq[elem]++;

    int ind = 0;

    // Sorting values
    for (int value = low; value <= high; value++)
    {
        int cnt = freq[value];
        while (cnt--)
        {
            arr[ind++] = value; // assigning value to array ind
        }
    }
}

bool isValid(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i + 1 < n; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    // Taking input for arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countingSort(arr);

    // Printing sorted values
    for (auto it : arr)
        cout << it << " ";

    // validity function is Checking if the array is sorted or not
    bool validity = isValid(arr);

    if (validity)
        puts("OK");
    else
        puts("NOT OK");

    return 0;
}