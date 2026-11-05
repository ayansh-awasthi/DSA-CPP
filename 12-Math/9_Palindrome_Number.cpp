#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
    }

    int reversed = 0;

    while (x > reversed) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return x == reversed || x == reversed / 10;
}

int main() {
    int x = 121;

    if (isPalindrome(x)) {
        cout << x << " is a Palindrome";
    } else {
        cout << x << " is not a Palindrome";
    }

    return 0;
}