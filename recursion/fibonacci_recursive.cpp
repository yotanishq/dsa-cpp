#include <iostream>
using namespace std;

// Recursive Fibonacci implementation
// Notes:
// - Demonstrates basic recursion and base case handling
// - Not optimized; recalculates overlapping subproblems
// Time Complexity: Exponential (O(2^n))
// Space Complexity: O(n) due to recursion stack

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
