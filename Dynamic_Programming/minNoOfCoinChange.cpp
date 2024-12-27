#include <bits/stdc++.h>
using namespace std;

// Global memoization table to store intermediate results
// dp[i][sum] will store the minimum coins required to make the sum using coins from index i onwards
vector<vector<int>> dp;

// Recursive function to find the minimum coins required to make a given sum
int minCoinsRecur(int i, int sum, vector<int> &coins) {
    // Base case: If the sum is 0, no coins are needed
    if (sum == 0) {
        return 0;
    }

    // Base case: If sum is negative or no coins are left, return INT_MAX (impossible to form the sum)
    if (sum < 0 || i == coins.size()) {
        return INT_MAX;
    }

    // If the result is already computed for the current state, return it from the dp table
    if (dp[i][sum] != -1) {
        return dp[i][sum];
    }

    // Initialize 'take' to a large value (INT_MAX) to represent not taking the current coin
    int take = INT_MAX;

    // If the current coin value is valid, try taking it
    if (coins[i] > 0) {
        take = minCoinsRecur(i, sum - coins[i], coins); // Recursive call after reducing the sum
        if (take != INT_MAX) {
            take++; // Increment the coin count if a valid solution exists
        }
    }

    // Option to not take the current coin and move to the next coin
    int noTake = minCoinsRecur(i + 1, sum, coins);

    // Store the minimum of the two options (take or noTake) in the dp table
    return dp[i][sum] = min(take, noTake);
}

// Driver function to initialize the memoization table and call the recursive function
int minCoins(vector<int> &coins, int sum) {
    // Resize the dp table to store results for all combinations of index and sum
    dp.assign(coins.size(), vector<int>(sum + 1, -1));

    // Call the recursive function starting from the first coin and the target sum
    int ans = minCoinsRecur(0, sum, coins);

    // If the answer is INT_MAX, it means the sum cannot be formed; otherwise, return the answer
    return ans != INT_MAX ? ans : -1;
}

int main() {
    // Input: Coin denominations
    vector<int> coins = {9, 6, 5, 1};
    int sum = 20; // Target sum to be achieved

    // Output: Minimum number of coins required to form the sum
    cout << minCoins(coins, sum);

    return 0;
}
