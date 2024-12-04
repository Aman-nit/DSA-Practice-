#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int distributeCandies(vector<int> &candyType)
{
    // Optimized solution

    // Step 1: Sort the array to group identical elements together
    sort(candyType.begin(), candyType.end());

    // Step 2: Remove duplicates and calculate the count of unique elements
    int uniqueCount = unique(candyType.begin(), candyType.end()) - candyType.begin();

    // Step 3: Calculate the maximum candies Alice can eat (half the total candies)
    int n = candyType.size() / 2;

    // Step 4: Return the smaller of uniqueCount or n
    return min(uniqueCount, n);
}

int main()
{
    int n;
    // Input: Number of candies (must be even as per problem constraints)
    cout << "Enter number of elements (Even number): ";
    cin >> n;

    vector<int> candyType(n);
    // Input: Candy types
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " of array: ";
        cin >> candyType[i];
    }
    cout << endl;

    // Call the function and print the result
    int ans = distributeCandies(candyType);
    cout << "Maximum types of candies Alice can eat: " << ans << endl;

    return 0;
}
