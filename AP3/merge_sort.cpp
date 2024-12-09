#include <iostream>

using namespace std;

int merge(int array[], int low, int mid, int high) {
  cout << "initial array" << endl;
  for (int k = low; k < high; k++) {
    cout << array[k] << " ";
  }
  cout << endl;

  int n1 = mid - low + 1;
  int n2 = high - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++) {
    L[i] = array[i + low];
  }

  for (int j = 0; j < n2; j++) {
    R[j] = array[j + mid + 1];
  }

  int i = 0, j = 0;

  for (int k = low; k < high; k++) {
    if (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
        array[k] = L[i];
        i++;
      } else {
        array[k] = R[j];
        j++;
      }
    }
    else if (i < n1) {
      array[k] = L[i];
      i++;
    } else if (j < n2) {
      array[k] = R[j];
      j++;
    }
  }

  cout << "final array" << endl;
  for (int k = low; k < high; k++) {
    cout << array[k] << " ";
  }
  cout << endl;

  return 0;
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
  int size;
  // cin >> size;
  size = 7;

  int array[size];

  // for (int i = 0; i < size; i++) {
  //   cin >> array[i];
  // }

  array[0] = 7;
  array[1] = 6;
  array[2] = 5;
  array[3] = 4;
  array[4] = 3;
  array[5] = 2;
  array[6] = 1;

  merge_sort(array, 0, size);

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  
  return 0;
}