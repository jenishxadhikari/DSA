#include <bits/stdc++.h>
using namespace std;

void gcd(int a, int b) {
  int gcd;
  int n = min(a, b);
  for (int i = n; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
      break;
    }
  }
  cout << gcd << endl;
}

int euclideanGcd(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }
  if (a == 0)
    return b;
  return a;
}

int main() {
  int a, b;
  cin >> a >> b;
  gcd(a, b);
  cout << euclideanGcd(a, b);
  return 0;
}