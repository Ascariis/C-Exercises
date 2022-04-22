// Verificare se un numero preso in input è un numero primo.

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Inserire un numero: ";
  cin >> num;
  bool primo = true;

  if (num == 0 || num == 1) {
    primo = false;
  }

  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      primo = false;
    } else
      primo = true;
  }
}