#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int x) {
    if(x < 0)
        return false;

    long long temp = x;
    long long reversed = 0;
    while(temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return (reversed == x);
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if(isPalindrome(x))
        cout << x << " is a palindrome." << endl;
    else
        cout << x << " is not a palindrome." << endl;

    return 0;
}

