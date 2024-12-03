#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to check for duplicates in the array
// Paste this function in Leet code and submit
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> elements; // To store unique elements
    for (int ele : nums)
    { // Range-based loop for better readability
        if (elements.find(ele) != elements.end())
        {
            return true; // Duplicate found
        }
        elements.insert(ele); // Insert current element into the set
    }
    return false; // No duplicates found
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Handle edge case of empty array
    if (n <= 0)
    {
        cout << "No elements to check for duplicates.\n";
        return 0;
    }

    vector<int> nums(n); // Create vector of size n
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> nums[i];
    }

    // Check for duplicates
    if (containsDuplicate(nums))
    {
        cout << "Duplicate element is present.\n";
    }
    else
    {
        cout << "No duplicate element is present.\n";
    }

    return 0;
}
