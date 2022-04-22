/* Leggere una serie di numeri interi passati dall'utente, fermandosi al primo
numero che rende la serie non crescente e restituendo quanti numeri erano stati
inseriti. Esempio: 1 2 3 4 5 3 inseriti 5 numeri */

#include <iostream>
using namespace std;

int main() {
  int num, appo, conta = 0;

  cout << "Inserisci un valore: ";
  cin >> num;

  do {
    appo = num;
    cout << "Inserisci un'altro valore: ";
    cin >> num;
    conta++;
  } while (appo < num);

  cout << "La serie di numeri si interrompe al numero " << conta;
}