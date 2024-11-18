// Exercise 1

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//   float number;
//   cin >> number;

//   if (number < 0) {
//     cout << "Número negativo" << endl;
//   }

//   float square = sqrt(number);

//   cout << "A raiz quadrada é: " << square << endl;

//   return 0;
// }

// <------------------------------------------------------->

// Exercise 4

// #include <iostream>
// #include <time.h>
// #include <stdlib.h>

// using namespace std;

// int main() {
//   short lower = 1;
//   short higher = 15;
//   short max_attempts = 3;

//   srand(time(0));

//   int random_number = lower + (rand() % (higher - lower + 1));

//   for (int i = 0; i < max_attempts; i++) {
//     int attempt;
//     cin >> attempt;

//     if (attempt == random_number) {
//       cout << "Você acertou!" << endl;
//       return 0;
//     } 

//     if (attempt < random_number) {
//       cout << "O número aleatório é maior" << endl;
//     }

//     if (attempt > random_number) {
//       cout << "O número aleatório é menor" << endl;
//     }
//   }

//   cout << "Você perdeu! O número aleatório era: " << random_number << endl;

//   return 0;
// }