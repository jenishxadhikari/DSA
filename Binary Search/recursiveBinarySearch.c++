#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target) {
  if (low > high)
    return -1;
  int mid = low + (high - low) / 2;
  if (arr[mid] == target)
    return mid;
  else if (target > arr[mid])
    return binarySearch(arr, mid + 1, high, target);
  else
    return binarySearch(arr, low, mid - 1, target);
}

int main() {
  vector<int> arr = {2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                     43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int n = arr.size();
  int target = 59;
  int low = 0;
  int high = n - 1;
  cout << binarySearch(arr, low, high, target);
  return 0;
}