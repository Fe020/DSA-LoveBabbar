//ache se smjh nhi aaya

#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int coinChangeHelper(vector<int>& coins, int amount) {
    // Base case: if amount becomes zero, we have successfully made the change.
    if (amount == 0)
        return 0;

    int minCoins = INT_MAX;

    // Try each coin and recursively find the minimum number of coins needed.
    for (int coin : coins) {
        // If the current coin is less than or equal to the amount.
        if (coin <= amount) {
            // Recursively calculate the number of coins needed for the remaining amount.
            int subMinCoins = coinChangeHelper(coins, amount - coin);
            // If the subproblem solution is valid and better, update minCoins.
            if (subMinCoins != -1)
                minCoins = min(minCoins, subMinCoins + 1);
        }
    }

    // If no valid solution was found, return -1.
    return (minCoins == INT_MAX) ? -1 : minCoins;
}

int coinChange(vector<int>& coins, int amount) {
    // Call the helper function to find the minimum number of coins.
    return coinChangeHelper(coins, amount);
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    int result = coinChange(coins, amount);
    if (result == -1)
        cout << "It's not possible to make the change." << endl;
    else
        cout << "Minimum number of coins required: " << result << endl;
    return 0;
}
