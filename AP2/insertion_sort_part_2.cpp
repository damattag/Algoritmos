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
    for (int k = 0; k < v.size(); k++) {
      cout << v[k] << " ";
    }
    cout << endl;
  };
}

int main() {
  vector<int> v = {1, 4, 3, 5, 6, 2};
  insertion_sort(v);

  return 0;
}

