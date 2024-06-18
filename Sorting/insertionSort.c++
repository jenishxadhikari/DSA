#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}

int main() {
  int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}