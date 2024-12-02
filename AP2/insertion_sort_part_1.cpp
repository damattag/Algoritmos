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

      for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
      }
      cout << endl;
    };

    v[j + 1] = key;
  };

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v = {5, 3, 2, 4, 1};
  insertion_sort(v);

  return 0;
}

