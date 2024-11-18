#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string pilot;
  cin >> pilot;
  float total_distance;
  cin >> total_distance;
  float time;
  cin >> time;

  float avg_speed = total_distance / time;

  stringstream response;

  if (avg_speed > 227) {
    response << pilot << " se deu muito bem na prova de hoje!!" << endl;
  } else if (avg_speed == 227) {
    response << pilot << " teve um ótimo resultado. Mas, acredito que temos potencial para melhorar um pouco mais!" << endl;
  } else {
    response << pilot << " não se deu tão bem. É preciso melhorar isso!" << endl;
  }

  cout << response.str();

  return 0;
}
