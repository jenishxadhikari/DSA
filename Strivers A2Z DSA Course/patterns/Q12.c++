/*
    n = 5
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    for (int k = 1; k <= 2*(n-i) ; k++) {
      cout << " ";
    }
    for (int j = i; j >= 1; j--) {
      cout << j;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  pattern(n);
  return 0;
}