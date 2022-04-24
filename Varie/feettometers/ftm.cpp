#include <iostream>
using namespace std;

int main() {
  char reply;

  do {
    system("cls") && system("clear");

    int feet;
    cout << "Inserire il valore in piedi... ";
    cin >> feet;

    cout << "Il valore di " << feet << " piedi in metri e': " << feet * 0.3048
         << endl;
    cout << "Vuoi eseguire altre conversioni? [s/n] ";

    cin >> reply;

    if (reply == 'n') {
      system("cls") && system("clear");
      return 0;
    }

  } while (reply == 's');
}