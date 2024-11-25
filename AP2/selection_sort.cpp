#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    int min = i;
    for (int j = i + 1; j < v.size(); j++) {
      if (v[j] < v[min]) {
        min = j;
      }
    }

    swap(v[i], v[min]);
  }
}

int main() {
  vector<int> v = {5, 3, 2, 4, 1};
  selection_sort(v);

  return 0;
}