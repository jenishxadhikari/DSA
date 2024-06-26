/*
    n = 5
    ABCDE 
    ABCD
    ABC
    AB
    A
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  for (int i = n; i >= 1; i--) {
    for (char j = 'A'; j < 'A' + i; j++) {
      cout << j ;
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