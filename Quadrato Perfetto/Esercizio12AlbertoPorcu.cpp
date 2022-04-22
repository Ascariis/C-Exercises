// Verificare se un numero è un quadrato perfetto.
// (int)num per estrarre la parte intera di un valore
// decimale.

#include <math.h>

#include <iostream>

using namespace std;

int main() {
  float num;

  cout << "Inserire un valore: ";
  cin >> num;

  num = sqrt(num);
  if (num == (int)num)
    cout << "Il numero inserito è un quadrato perfetto.";
  else
    cout << "Il numero inserito non è un quadrato perfetto.";
}