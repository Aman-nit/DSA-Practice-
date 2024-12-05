#include <iostream>
#include <vector>
using namespace std;

// Function to search in a rotated sorted array
int searchInRotatedSortedArray(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;

    // Binary search in a rotated sorted array
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Avoid overflow in large arrays

        // Check if the middle element is the target
        if (nums[mid] == target)
        {
            return mid;
        }

        // Determine which half of the array is sorted
        if (nums[start] <= nums[mid])
        { // Left part is sorted
            if (nums[start] <= target && target < nums[mid])
            {
                end = mid - 1; // Target lies in the left sorted part
            }
            else
            {
                start = mid + 1; // Target lies in the right part
            }
        }
        else
        { // Right part is sorted
            if (nums[mid] < target && target <= nums[end])
            {
                start = mid + 1; // Target lies in the right sorted part
            }
            else
            {
                end = mid - 1; // Target lies in the left part
            }
        }
    }

    // If the target is not found
    return -1;
}

int main()
{
    int n;

    // Input: Number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input: Rotated sorted array
    vector<int> nums(n);
    cout << "Enter the elements of the rotated sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> nums[i];
    }

    // Input: Target element to search
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    // Call the function and output the result
    int ans = searchInRotatedSortedArray(nums, target);
    if (ans != -1)
    {
        cout << "Target element found at index: " << ans << endl;
    }
    else
    {
        cout << "Target element not found in the array.\n";
    }

    return 0;
}
