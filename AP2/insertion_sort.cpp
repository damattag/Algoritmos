#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &v) {
  for (int i = 1; i < v.size(); i++) {
    int j = i - 1;
    int key = v[i];

    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      
      j -= 1;
    };

    v[j + 1] = key;
  };
}

int main() {
  vector<int> v = {5, 3, 2, 4, 1};
  insertion_sort(v);

  return 0;
}