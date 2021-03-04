/** 
 * ----------- Sorry For My Delayed -----------
 *  ---------- Bubble Sort -------------------- 
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
 * Insertion sort compare the elements at index 0 to its  predecessor
 * if the predecessor is smaller than the pointed element (element of index 0) then swap the elements
 * if the predecessor is larger than the pointed element move the pointer one position up 
 * 
 * 
 * 
 **/

#include <bits/stdc++.h>
using namespace std;

// Function for Bubble Sort
void bubble_sort(vector<int> &arr, int n)
{
    cout << "Bubble Sort : ";

    for (int i = 0; i < n; i++) // pointer start from index 0,
    {
        for (int j = i + 1; j < n; j++) // this loop finds the smallest element from rest array (where size of the array is decresed b 1)
        {
            if (arr[i] > arr[j])      // this if statement check, is the pointed element greater than the next immediate element or not.
                swap(arr[i], arr[j]); // if the statement is true then it swap the elements
        }
    }
}

// function to sort array using insertion Sort
void insertionSort(vector<int> &arr, int n)
{
    cout << "Insertion Sort : ";
    int key;
    for (int i = 1; i < n; i++) // this loop iterate the array from arr[1] to arr[n]
    {
        key = arr[i]; // assigning the key to arr[i]
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
    printArray(arr, n); // Prints the array taken from user as input
    bubble_sort(arr, n);
    printArray(arr, n); //Print the sorted array(using Bubble Sort) as output
    insertionSort(arr, n);
    printArray(arr, n); //Print the sorted array(using Insertion Sort) as output

    return 0;
}