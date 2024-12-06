#include <iostream>
#include <vector>
#include <algorithm> // For the 'min' and 'max' functions
using namespace std;

// Function to calculate the maximum profit from buying and selling stocks
int buyAndSellStock(vector<int> &prices)
{
    int min_price = INT16_MAX; // Initialize to the maximum possible value
    int max_profit = 0;        // Initialize profit as 0 since we can't have negative profit

    // Loop through each day's stock price
    for (int price : prices)
    {
        // Update the minimum price seen so far
        min_price = min(min_price, price);

        // Calculate potential profit and update maximum profit if it's higher
        max_profit = max(max_profit, price - min_price);
    }

    // Return the maximum profit calculated
    return max_profit;
}

int main()
{
    int n;

    // Input: Number of days (size of the array)
    cout << "Enter the number of days: ";
    cin >> n;

    // Input validation: Ensure the number of days is positive
    if (n <= 0)
    {
        cout << "Number of days must be positive. Exiting program.\n";
        return 1;
    }

    vector<int> price(n); // Array to store stock prices for each day

    // Input: Stock prices for each day
    cout << "Enter the prices of stocks:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Stock price on day " << i + 1 << ": ";
        cin >> price[i];

        // Input validation: Ensure stock prices are non-negative
        if (price[i] < 0)
        {
            cout << "Stock prices cannot be negative. Exiting program.\n";
            return 1;
        }
    }

    // Output: Maximum profit that can be achieved
    cout << "Maximum profit is: " << buyAndSellStock(price) << "\n";

    return 0;
}
