#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of coins (using `while`)
void findMinCoins(vector<int> &coins, int amount) {

    sort(coins.rbegin(), coins.rend()); // Sort coins in descending order

    vector<int> result; // To store the selected coins

    for (int coin : coins) {
        while (amount >= coin) { // Keep using the coin until it no longer fits
            amount -= coin;
            result.push_back(coin);
        }
    }

    // If amount cannot be made using the coins
    if (amount != 0) {
        cout << "The amount cannot be formed using the given coins." << endl;
        return;
    }

    // Output the result
    cout << "Minimum coins required: " << result.size() << endl;

    cout << "Coins used: ";
    for (int coin : result) {
        cout << coin << " ";
    }
    cout << endl;
}

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500}; // Coin denominations

    int amount = 93;

    findMinCoins(coins, amount);

    return 0;
}
