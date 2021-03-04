/** ---------- Sorry For My Delayed. My Mid semester exam is going on--------------------------   
 * ---------- Counting Sort-------------------------- 
 * Counting Sort algorithm sorts an array by counting the frequency of unique element in the array.
 * The count is stored in a separate array( Frequence array). 
 * Then sorts the array by mapping the count as an index of that separate array(frequence array)
 * 
 **/
#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr)
{
    cout << "Sorted Array : ";

    // Finds the maximum value of the array
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // Finds the minimum value of the array
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < max)
            min = arr[i];
    }

    int range = max - min + 1;
    // Create a frequency array to store count of inidividul
    vector<int> freq(range);
    for (auto elem : arr)
        freq[elem]++;

    int ind = 0;

    // Sorting values
    for (int value = min; value <= max; value++)
    {
        int cnt = freq[value];
        for (int i = 0; i < cnt; i++)
        {
            arr[ind++] = value; // assigning value to array ind
        }
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
    int n; // size of the array
    cin >> n;
    vector<int> arr(n);

    // Taking input for arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Input Array : ";
    printArray(arr, n); //Prints input array
    countingSort(arr);
    printArray(arr, n); // Prints Output Sorted array

    return 0;
}