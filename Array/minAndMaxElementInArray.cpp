#include <iostream>
#include <vector>
using namespace std;

// This function computes the minimum and maximum values in an array.
// To submit this function on GFG, copy and paste it directly there.
pair<long long, long long> minAndMaxInArr(vector<long long int> arr)
{
    // Initialize variables to hold the minimum and maximum values
    // Using INT16_MAX and INT16_MIN as initial values for comparison
    long long int mini = INT16_MAX, maxi = INT16_MIN;

    // Iterate over each element in the array
    for (int i = 0; i < arr.size(); i++)
    {
        long long int element = arr[i]; // Get the current element
        mini = min(element, mini);      // Update the minimum value
        maxi = max(element, maxi);      // Update the maximum value
    }

    // Return a pair containing the minimum and maximum values
    return {mini, maxi};
}

int main()
{
    int n; // Variable to store the number of elements in the array
    cout << "Enter number of elements :- ";
    cin >> n;

    // Declare a vector to store the array elements
    vector<long long int> arr(n);

    // Input the array elements from the user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element of index " << i << " :- ";
        cin >> arr[i];
    }

    // Call the function to get the minimum and maximum values
    pair<long long, long long> ans = minAndMaxInArr(arr);

    // Print the results
    cout << "Minimum value: " << ans.first << ", Maximum value: " << ans.second;

    return 0;
}
