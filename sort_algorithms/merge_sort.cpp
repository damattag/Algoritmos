#include <iostream>

using namespace std;

void print_array(int *array, int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void merge(int *array, int left, int mid, int right) {
  int i = left;
  int j = mid + 1;
  int k = left;

  int n1 = mid - left + 1;
  int n2 = right - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++) {
    L[i] = array[i + left];
  }

  for (int i = 0; i < n2; i++) {
    R[i] = array[i + mid + 1];
  }

  i = 0;
  j = 0;

  for (int k = left; k <= right; k++) {
    if (L[i] <= R[j]) {
      array[k] = L[i];
      i++;
    } else {
      array[k] = R[j];
      j++;
    }
  };
};

void merge_sort(int *array, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;

    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);

    merge(array, left, mid, right);

  }
}

int main() {
  int array[] = {1, 9, 5, 7, 2, 11, 10, 15, 1, 19};
  int n = sizeof(array) / sizeof(array[0]);

  merge_sort(array, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}