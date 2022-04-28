#include <iostream>
using namespace std;

int main() {
  int n;

  system("clear") && system("cls");

  cout << "Inserisci un numero: ";
  cin >> n;

  while (n <= 0) {
    cout << "Inserisci un numero valido... ";
    cin >> n;
  }

  for (int i = 0; i <= 10; i++) {
    cout << n * i << endl;
  }
}
