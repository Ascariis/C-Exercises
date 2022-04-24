/* Crea una funzione per trovare
   la somma assoluta dei valori di un array. */

#include <iostream>
using namespace std;

const int size = 5;
int ar[size] = {2, -1, 4, 8, 10};

int getAbsoluteSum() {
  int sum = abs(ar[0]);
  for (int i = 1; i < size; i++) sum += abs(ar[i]);
  return sum;
}

int main() { cout << getAbsoluteSum(); }