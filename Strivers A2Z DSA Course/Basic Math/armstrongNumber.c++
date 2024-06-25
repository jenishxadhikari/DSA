#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n) {
  int value = n;
  int divisor = (int)(log10(n) + 1);
  int armstrong = 0;
  while (n > 0) {
    armstrong = armstrong + pow((n % 10), divisor);
    n = n / 10;
  }
  return value == armstrong;
}

int main() {
  int n;
  cin >> n;
  cout << checkArmstrong(n);
  return 0;
}