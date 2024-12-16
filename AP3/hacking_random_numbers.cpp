#include <iostream>

using namespace std;

int merge(int array[], int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++) {
    L[i] = array[i + low];
  }

  for (int j = 0; j < n2; j++) {
    R[j] = array[j + mid + 1];
  }

  int i = 0, j = 0, k = low;
  
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      array[k] = L[i];
      i++;
      k++;
    } else {
      array[k] = R[j];
      j++;
      k++;
    }
  }

  while (i < n1) {
    array[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    array[k] = R[j];
    j++;
    k++;
  }

  return 0;
}

int countPairsWithDiff(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int left = i + 1, right = n - 1;
        int target = arr[i] + k;
        
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (arr[mid] == target) {
                count++;
                break;
            }
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return count;
}

void merge_sort(int array[], int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;

    merge_sort(array, low, mid);
    merge_sort(array, mid + 1, high);

    merge(array, low, mid, high);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  
  int numbers[n];
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  merge_sort(numbers, 0 , n - 1);

  cout << countPairsWithDiff(numbers, n, k);

  return 0;
}