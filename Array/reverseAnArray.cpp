#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the elements of an array (vector)
void reverseAnArray(vector<int> &arr)
{
    int s = 0;              // Start pointer (beginning of the array)
    int n = arr.size() - 1; // End pointer (last element of the array)

    // Loop to swap elements from start and end, moving towards the center
    while (s <= n)
    {
        swap(arr[s], arr[n]); // Swap elements at indices 's' and 'n'
        s++;                  // Increment the start pointer
        n--;                  // Decrement the end pointer
    }
}

// Function to print the elements of an array (vector)
void printArr(vector<int> &arr)
{
    int n = arr.size(); // Get the size of the array

    // Loop through the array and print each element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Move to the next line after printing the array
}

int main()
{
    int n; // Variable to store the number of elements in the array

    // Prompt the user to enter the number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Create a vector of size 'n'
    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Printing original array...\n";
    printArr(arr);

    // Reverse the array
    reverseAnArray(arr);

    // Print the reversed array
    cout << "Printing reversed array...\n";
    printArr(arr);

    return 0;
}
