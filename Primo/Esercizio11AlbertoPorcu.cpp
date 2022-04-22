// Verificare se un numero preso in input è un numero primo.

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Inserire un numero: ";
  cin >> num;

  if (num % 2 != 0)
    cout << "Il numero inserito è primo.";
  else
    cout << "Il numero inserito non è primo.";
}