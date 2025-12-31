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
    cout <<"Enter any number(int) : ";
    cin >> x;
    int is= isPalindrome(x);
    if (is==1) cout <<"True";
    else if (is==0) cout <<"False";
    return 0;
}
