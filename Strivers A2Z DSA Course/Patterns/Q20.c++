/*
    n = 5
  *        *
  **      **
  ***    ***
  ****  ****
  **********
  ****  ****
  ***    ***
  **      **
  *        *
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  int space = 2 * (n - 1);
  for (int i = 1; i < n * 2; i++) {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++) {
      cout << "*";
    }
    for (int k = 1; k <= space; k++) {
      cout << " ";
    }
    for (int j = 1; j <= stars; j++) {
      cout << "*";
    }
    cout << endl;
    if (i < n)
      space -= 2;
    else
      space += 2;
  }
}

int main() {
  int n;
  cin >> n;
  pattern(n);
  return 0;
}