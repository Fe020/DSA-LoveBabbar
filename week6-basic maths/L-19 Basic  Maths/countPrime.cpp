//sieve of eratosthenes
// O(n*log(log n))

#include <iostream>
#include <vector>

class Solution {
public:
    int countPrimes(int n) 
    {
        if (n <= 2)
            return 0;

        std::vector<bool> prime(n, true);
        int count = 0;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                count++;
                int j = 2;
                while (i * j < n)
                {
                    prime[i * j] = false;
                    j++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    int n = 30; // You can change this value to test with different inputs
    int result = solution.countPrimes(n);

    std::cout << "Number of prime numbers less than " << n << ": " << result << std::endl;

    return 0;
}
