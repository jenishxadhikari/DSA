#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
  int pivot = arr[low];
  int left = low + 1;
  int right = high;
  while (left < right) {
    while (arr[left] <= pivot && left < high) {
      left++;
    }
    while (arr[right] > pivot && right > low) {
      right--;
    }
    if (left < right)
      swap(arr[left], arr[right]);
  }
  swap(arr[low], arr[right]);
  return right;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
  }
}

int main() {
  int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}