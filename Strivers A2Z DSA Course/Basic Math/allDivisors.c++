#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

void printAllDivisors(int n) {
  vector<int> result;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      result.push_back(i);
      if ((n / i) != i) {
        result.push_back(n / i);
      }
    }
  }
  sort(result.begin(), result.end());
  for (auto value : result)
    cout << value << " ";
}

int main() {
  int n;
  cin >> n;
  printAllDivisors(n);
  return 0;
}