#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <vector>
using namespace std;

const int Size = 10;
int ar[Size];

void menuScelta() {
  cout << "\n";
  cout << "0. Quit\n";
  cout << " \n";
  cout << "1. Visualizza in ordine crescente" << endl;
  cout << "2. Visualizza in ordine decrescente" << endl;
  cout << "3. Visualizza il numero maggiore" << endl;
  cout << "4. Visualizza il numero minore" << endl;
  cout << "5. Visualizza il numero più presente all’interno dell’array" << endl;
  cout << "6. Visualizza la somma di tutti gli elementi" << endl;
  cout << "7. Visualizza l’elenco di tutti gli elementi pari" << endl;
  cout << "8. Visualizza tutti i valori dell’Array maggiori del numero inserito"
       << endl;
  cout << "9. Controlla se presenta 7 valori distinti" << endl;
  cout << "10. Sostituisci i valori negativi dell'array con 'NEG'" << endl;
  cout << "11. Crea un nuovo array in base ai valori positivi del primo array"
       << endl;
  cout << "12. Numero di elementi positivi, negativi o nulli nell'array"
       << endl;
  cout << "13. Sostituire tutti gli elementi dell’array" << endl;
  cout << "\n";
}

void riempiArray() {
  srand(time(0));
  for (int x = 0; x < Size; x++)
    ar[x] = rand() % 21 - 10;
}

void printArray() {
  for (int x = 0; x < Size; x++)
    cout << ar[x] << " ";
  cout << "\n";
}

// BubbleSort + Sentinella
void arrCrescente() {
  int y, temp;
  bool scambi = false;
  do {
    scambi = false;
    for (y = 0; y < Size - 1; y++) {
      if (ar[y] > ar[y + 1]) {
        temp = ar[y];
        ar[y] = ar[y + 1];
        ar[y + 1] = temp;
        scambi = true;
      }
    }

  } while (scambi == true);
  printArray();
}

void arrDecrescente() {
  int y, temp;
  bool scambi = false;
  do {
    scambi = false;
    for (y = 0; y < Size - 1; y++) {
      if (ar[y] < ar[y + 1]) {
        temp = ar[y];
        ar[y] = ar[y + 1];
        ar[y + 1] = temp;
        scambi = true;
      }
    }

  } while (scambi == true);
  printArray();
}

void numMaggiore() {
  int max = ar[0];
  for (int x = 1; x < Size; x++)
    if (ar[x] > max)
      max = ar[x];

  printArray();
  cout << "Il numero maggiore è " << max << endl;
}

void numMinore() {
  int min = ar[0];
  for (int x = 1; x < Size; x++)
    if (ar[x] < min)
      min = ar[x];
 
  printArray();
  cout << "Il numero minore è " << min << endl;
}

void piuPresente() {
  arrCrescente();

  int max = 1, ris = ar[0], curr = 1;
  for (int i = 1; i < Size; i++) {
    if (ar[i] == ar[i - 1])
      curr++;
    else {
      if (curr > max) {
        max = curr;
        ris = ar[i - 1];
      }
      curr = 1;
    }
  }

  if (curr > max) {
    max = curr;
    ris = ar[Size - 1];
  }

  cout << "Il numero più presente nell'array è: " << ris << endl;
}

void arrSomma() {
  int sum = ar[0];
  for (int i = 1; i < Size; i++)
    sum += ar[i];

  printArray();
  cout << "La somma dei valori dell'array equivale a: " << sum << endl;
}

void numPari() {
  for (int i = 0; i < Size; i++)
    if (ar[i] % 2 == 0)
      cout << ar[i] << " ";
  cout << "\n";
}

void maggInserito() {
  int valore, conta;
  cout << "Inserire un valore: ";
  cin >> valore;

  for (int i = 0; i < Size; i++)
    if (ar[i] > valore) {
      cout << ar[i] << " ";
      conta++;
    }

  if (conta < 1) {
    cout << "Nessun numero presente nell'array è maggiore di quello inserito. ";
    cout << "\n";
  }
}

void printNeg() {
  for (int i = 0; i < Size; i++) {
    if (ar[i] < 0)
      cout << "NEG ";
    else
      cout << ar[i] << " ";
  }
  cout << "\n";
}

void setteValori() {
  int count = 1;
  int arr[Size];
  for (int i = 0; i < Size; i++)
    arr[i] = 1;

  for (int i = 0; i < Size; i++)
    for (int y = 1; y < Size; y++)
      if (ar[y] == ar[i])
        arr[i] += 1;

  int max = arr[0];
  for (int x = 1; x < Size; x++)
    if (arr[x] > max)
      max = arr[x];

  printArray();
  if (max < 5)
    cout << "Sono presenti almeno 7 valori distinti." << endl;
  else
    cout << "Non sono presenti 7 valori distinti." << endl;
}

void numPosNegNull() {
  int null = 0, pos = 0, neg = 0;

  for (int i = 0; i < Size; i++)
    if (ar[i] == 0)
      null++;
    else if (ar[i] > 0)
      pos++;
    else
      neg++;

  printArray();
  cout << "Ci sono " << pos << " numeri positivi, " << neg
       << " numeri negativi e " << null << " nulli. \n";
}

void arNumPos() {
  vector<int> newAr;

  for (int i = 0; i < Size; i++)
    if (ar[i] > 0)
      newAr.push_back(ar[i]);

  for (int i = 0; i < newAr.size(); i++)
    cout << newAr[i] << " ";

  // Versione senza vettore
  /*
  int size = 0;
  arrCrescente();

  for (int i = 0; i < Size; i++)
    if (ar[i] > 0) size++;

  int arPos[size];

  for (int i = 0; i < Size; i++)
    if (ar[i] > 0) {
      arPos[i] = ar[i];
      cout << arPos[i] << " ";
    }*/
  cout << endl;
}

void arrayUtente() {
  int min, max;

  cout << "Inserire il valore minimo: \n";
  cin >> min;
  cout << "Inserire il numero massimo: \n";
  cin >> max;

  int range = max - min + 1;

  for (int i = 0; i < Size; i++) {
    ar[i] = rand() % range + min;
    cout << ar[i] << " ";
  }
  cout << endl;
}

int main() {
  char risposta;

  do {
    system("clear");
    int scelta;

    riempiArray();

    cout << "<----- Programma multiuso sugli array ----->" << endl;
    menuScelta();

    do {
      cout << "Inserire la propria scelta [1-13]: ";
      cin >> scelta;
      cout << "\n";
    } while (scelta < 0 || scelta > 13);

    if (scelta == 0)
      break;

    switch (scelta) {
    case 1:
      arrCrescente();
      break;
    case 2:
      arrDecrescente();
      break;
    case 3:
      numMaggiore();
      break;
    case 4:
      numMinore();
      break;
    case 5:
      piuPresente();
      break;
    case 6:
      arrSomma();
      break;
    case 7:
      numPari();
      break;
    case 8:
      maggInserito();
      break;
    case 9:
      setteValori();
      break;
    case 10:
      printNeg();
      break;
    case 11:
      arNumPos();
      break;
    case 12:
      numPosNegNull();
      break;
    case 13:
      arrayUtente();
      break;

    default:
      break;
    }

    cout << "\nVuoi continuare con un'altra operazione? [Y/n] ";
    cin >> risposta;

  } while (risposta != 'n' || risposta == 'y');
}
