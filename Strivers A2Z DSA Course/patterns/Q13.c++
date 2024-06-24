/*
    n = 5
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << ++sum << " ";
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