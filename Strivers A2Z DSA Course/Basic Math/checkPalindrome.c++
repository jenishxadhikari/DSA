#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n) {
  int value = n;
  int reverse = 0;
  while (n > 0) {
    int temp = n % 10;
    reverse = reverse * 10 + temp;
    n = n / 10;
  }
  return value == reverse;
}

int main() {
  int n;
  cin >> n;
  cout << checkPalindrome(n);
  return 0;
}