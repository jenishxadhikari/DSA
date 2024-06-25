#include <bits/stdc++.h>
using namespace std;

void reverseNumber(int n) {
  int reverse = 0;
  while (n > 0) {
    int temp = n % 10;
    reverse = reverse * 10 + temp;
    n = n / 10;
  }
  cout << reverse;
}

int main() {
  int n;
  cin >> n;
  reverseNumber(n);
  return 0;
}