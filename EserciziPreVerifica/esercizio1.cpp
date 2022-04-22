/* L'utente inserisce una temperatura in Celsius e il calcolatore la converte in
Fahrenheit ed in Kelvin. Se la
temperatura inserita è minore dello zero assoluto (-273,15), il calcolatore
segnala un errore. */

#include <iostream>
using namespace std;

int main() {
  float tempCel, tempFar, tempKel;

  cout << "Inserire un valore valido per la temperatura in Celsius: ";
  cin >> tempCel;

  while (tempCel < -273.15) {
    cout << "[ERRORE] - Il valore inserito non è valido." << endl;
    cout << "Inserire un valore valido per la temperatura in Celsius: ";
    cin >> tempCel;
  }

  tempFar = (1.8 * tempCel) + 32;
  tempKel = tempCel + 273.15;

  cout << tempCel << " gradi Celsius equivalgono a " << tempFar
       << " gradi Fahrenheit e " << tempKel << " gradi Kelvin.";
}
