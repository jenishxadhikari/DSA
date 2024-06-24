/*
    n = 5
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  int initialSpace = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      cout << "*";
    }
    for (int k = 1; k <= initialSpace; k++) {
      cout << " ";
    }
    for (int j = 1; j <= n - i + 1; j++) {
      cout << "*";
    }
    cout << endl;
    initialSpace += 2;
  }

  initialSpace = 2 * (n - 1);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int k = 1; k <= initialSpace; k++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
    initialSpace -= 2;
  }
}

int main() {
  int n;
  cin >> n;
  pattern(n);
  return 0;
}