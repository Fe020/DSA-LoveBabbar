//euclid method of finding gcd/hcf

#include <iostream>
int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = gcd(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
