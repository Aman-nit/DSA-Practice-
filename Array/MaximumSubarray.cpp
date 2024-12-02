#include <iostream>
#include <vector>
using namespace std;

// only this function need to paste in LeetCode
int maximumSubarray(vector<int> &nums)
{
    int curr = 0;
    int maxSum = INT16_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        curr += nums[i];
        if (curr > maxSum)
        {
            maxSum = curr;
        }
        //*yaha yad rakhna hai k curr tub hi zero hoga jb curr negative ho others case me curr maxSum se compare hoga
        // we will not include -ve for finding maxSum
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return maxSum;
}

int main()
{

    int n;
    cout << "Enter number of elements:-";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " of array";
        cin >> nums[i];
    }
    cout << endl;
    int ans = maximumSubarray(nums);
    cout<< ans;

    return 0;
}