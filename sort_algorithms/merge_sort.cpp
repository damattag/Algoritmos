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

void merge_sort(int array[], int low, int high, int* prints) {
  if (low < high) {
    int mid = (low + high) / 2;

    merge_sort(array, low, mid, prints);
    merge_sort(array, mid + 1, high, prints);

    merge(array, low, mid, high);
  }
}

int main() {
  int size;
  cin >> size;

  int array[size];

  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  int prints = 1;


  merge_sort(array, 0, size - 1, &prints);

  cout << "After Sorting the elements are : ";

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  
  return 0;
}