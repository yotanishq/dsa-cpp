#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    long long rev = 0;
    int y = x;

    if (x < 0) return 0;

    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    if (y == rev) return 1;
    else return 0;
}

int main() {
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}
