/*
    n = 5
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < n - i - 1; k++) {
      cout << " ";
    }
    char ch = 'A';
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << ch;
      if(j>=i){
        ch--;
      } else {
        ch++;
      }
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