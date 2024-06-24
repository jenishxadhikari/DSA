/*
    n = 5
    E 
    D E 
    C D E 
    B C D E 
    A B C D E
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  for (int i = n; i >= 1; i--) {
    for (int j = i; j <= n; j++) {
      char ch = 'A';
      ch = ch + (j - 1);
      cout << ch << " ";
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