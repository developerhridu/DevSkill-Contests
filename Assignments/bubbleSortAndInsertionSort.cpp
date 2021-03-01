/**  ---------- Bubble Sort -------------------- 
 * Bubble sort works by repeatedly swapping the adjacent elements if they are in wrong order.
 * first it finds the smallest element in the array
 * then shifts the smallest element at the beginning (at index 0) by swaping
 * then array size is decresed by 1
 * Then again it finds the smallest element in the rest array (Now size of the array is arry.size() - 1)
 * shifts the element at second first position (index 1)
 * 
 * and so on
 **/

/** ------------- Insertion Sort-----------------
 * 
 **/

#include <bits/stdc++.h>
using namespace std;

// Function for Bubble Sort
void bubble_sort(vector<int> &arr, int n)
{
    cout << "Bubble Sort : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

// function to sort array using insertion Sort
void insertionSort(vector<int> &arr, int n)
{
    cout << "Insertion Sort : ";
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// function to print array
void printArray(vector<int> &arr, int n)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    //Taking input for arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    bubble_sort(arr, n);
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}