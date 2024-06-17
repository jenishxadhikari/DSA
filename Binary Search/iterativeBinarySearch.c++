#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target) {
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
      return mid;
    else if (target > arr[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int main() {
  vector<int> arr = {2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                     43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int n = arr.size();
  int target = 47;
  cout << binarySearch(arr, n, target);
  return 0;
}