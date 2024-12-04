#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int distributeCandies(vector<int> &candyType)
{

    // this code is fully working
    // set<int> set;
    // for (auto types : candyType)
    // {
    //     set.insert(types);
    // }
    // int typesCount = set.size();
    // int n = candyType.size() / 2;
    // // cout << typesCount << endl;
    // // cout << n << endl;

    // int ans = min(typesCount, n);
    // return ans;

    // this is more optimised

    // Sort the array to group identical elements together
    sort(candyType.begin(), candyType.end());

    // Use the unique() function to get the count of unique elements
    int uniqueCount = unique(candyType.begin(), candyType.end()) - candyType.begin();

    // Calculate the maximum candies Alice can eat (half the total)
    int n = candyType.size() / 2;

    // Return the smaller of the two: unique types or maximum Alice can eat
    return min(uniqueCount, n);
}

int main()
{

    int n;
    cout << "Enter number of elements(Even number):-";
    cin >> n;
    vector<int> candyType(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " of array";
        cin >> candyType[i];
    }
    cout << endl;
    int ans = distributeCandies(candyType);
    cout << ans << endl;
    return 0;
}