#include <iostream>
#include <vector>
using namespace std;

int containerWithMostWater(vector<int> &height)
{
    int n = height.size();
    int maxArea = 0;
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int currHeight = min(height[left], height[right]);
        int currWidth = right - left;
        int currArea = currHeight * currWidth;
        maxArea = max(currArea, maxArea);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxArea;
}

int main()
{
    int n;

    // Input: Number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input:height of the lines
    vector<int> nums(n);
    cout << "Enter the eheight of the lines:-\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> nums[i];
    }
    cout << containerWithMostWater(nums);
    return 0;
}