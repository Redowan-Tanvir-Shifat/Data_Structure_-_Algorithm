#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of coins to make up a given amount
void findMinCoins(vector<int> &coins, int amount) {

    // Sort the coins in descending order to start with the largest denominations
    sort(coins.rbegin(), coins.rend());

    vector<int> result; // Vector to store the coins used to form the amount

    // Iterate through each coin in the sorted list
    for (int coin : coins) {
        // Use the current coin as many times as possible while it fits in the remaining amount
        while (amount >= coin) {
            amount -= coin;         // Subtract the value of the coin from the amount
            result.push_back(coin); // Add the coin to the result list
        }
    }

    // If there is any remaining amount after processing all coins, it cannot be formed
    if (amount != 0) {
        cout << "The amount cannot be formed using the given coins." << endl;
        return;
    }

    // Output the number of coins used
    cout << "Minimum coins required: " << result.size() << endl;

    // Output the specific coins used
    cout << "Coins used: ";
    for (int coin : result) {
        cout << coin << " ";
    }
    cout << endl;
}

int main() {
    // List of available coin denominations
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500};

    // Amount to be formed
    int amount = 93;

    // Call the function to find the minimum coins
    findMinCoins(coins, amount);

    return 0;
}