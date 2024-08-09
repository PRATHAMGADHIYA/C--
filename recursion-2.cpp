#include <iostream>
using namespace std;

int numberOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + numberOfDigits(num / 10);
}

bool isPalindromeUtil(int num, int n, int* temp) {
    if (n == 0) {
        return true;
    }

    if (num % 10 != temp[n - 1]) {
        return false;
    }

    return isPalindromeUtil(num / 10, n - 1, temp);
}

bool isPalindrome(int num) {
    if (num < 0) {
        return false; 
    }
    int n = numberOfDigits(num);
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = num % 10;
        num /= 10;
    }
    return isPalindromeUtil(num, n, temp);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}

