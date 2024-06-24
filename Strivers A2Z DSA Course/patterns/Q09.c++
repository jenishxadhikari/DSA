/*
    n = 5
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
*/

#include <bits/stdc++.h>
using namespace std;

void upperPyramid(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void lowerPyramid(int n) {
  for (int i = n; i >= 1; i--) {
    for (int k = 1; k <= n - i; k++) {
      cout << " ";
    }
    for (int j = 1; j < i * 2; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  upperPyramid(n);
  lowerPyramid(n);
  return 0;
}