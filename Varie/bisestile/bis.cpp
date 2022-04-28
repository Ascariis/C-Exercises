#include <iostream>
using namespace std;

bool leapCheck(int num) {
  bool risultato;
  if (num % 100 == 0) {
    risultato = false;
  } else if (num % 400 == 0) {
    return true;
  } else if (num % 4 == 0) {
    return true;
  }

  return risultato;
}

int main() {
  int anno;
  cin >> anno;

  if (leapCheck(anno) == true) {
    cout << "Bisestile";
  } else
    cout << "Non Bisestile";
}
