/* Simulare un'asta in cui ci siano due compratori che si contendono l'acquisto
di un oggetto. I due compratori, a turno, dovranno fare un'offerta per l'oggetto
da comprare, l'asta termina quando uno dei due compratori si ritira offrendo
'O', a quel punto l'altro compratore si sarà aggiudicato l'asta. Stampare quale
compratore si è aggiudicato l'asta e con che cifra. */

// NON FUNZIONA

#include <iostream>
using namespace std;

int main() {
  float off1, off2;

  system("clear");
  cout << "### SIMULATORE ASTA ###" << endl;
  cout << endl;

  do {
    cout << "Turno del primo offerente, inserire un importo: ";
    cin >> off1;
    system("clear");
  } while (off1 <= 0);

  do {
    cout << "Turno del secondo offerente, inserire un importo: ";
    cin >> off2;
    system("clear");
  } while (off2 <= 0 || off2 <= off1);

  do {
    do {
      cout << "Turno del primo offerente, inserire un importo: ";
      cin >> off1;
      system("clear");
    } while (off1 > 0 && off1 <= off2);

    do {
      cout << "Turno del secondo offerente, inserire un importo: ";
      cin >> off2;
      system("clear");
    } while (off2 > 0 && off2 <= off1 /*|| off1>0 && off1<=off2*/);

  } while (off1 != 0 || off2 != 0);

  if (off1 == 0)
    cout << "il vincitore è il secondo offerente, con una cifra di " << off2
         << " euro.";
  else if (off2 == 0)
    cout << "il vincitore è il primo offerente, con una cifra di " << off1
         << " euro.";
}
