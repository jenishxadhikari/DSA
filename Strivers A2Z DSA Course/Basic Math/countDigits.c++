#include <bits/stdc++.h>
using namespace std;

void countDigits(int n) {
  int count = 0;
  while (n > 0) {
    ++count;
    n = n / 10;
  }
  cout << count << endl;
}

void logCount(int n) {
  int count = (int)(log10(n) + 1);
  cout << count;
}

int main() {
  int n;
  cin >> n;
  countDigits(n);
  logCount(n);
  return 0;
}