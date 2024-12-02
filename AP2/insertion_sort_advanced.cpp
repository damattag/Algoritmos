#include <iostream>
#include <vector>

using namespace std;

int insertion_sort(vector<int> &v) {
  int moves = 0;
  for (int i = 1; i < v.size(); i++) {
    int j = i - 1;
    int key = v[i];

    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      
      j--;
      moves++;
    };

    if (j + 1 != i) {
      v[j + 1] = key;
      moves++;
    }
  };
  
  return moves;
}

int main() {
  vector<int> v = {1, 1, 1, 2, 2};
  insertion_sort(v);

  vector<int> arr = {2, 1, 3, 1, 2};
  insertion_sort(arr);

  return 0;
}

