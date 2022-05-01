/* The eight divisors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. The ten numbers not
exceeding 100 having exactly eight divisors are 24, 30, 40, 42, 54, 56, 66, 70,
78 and 88. Let f(n) be the count of numbers not exceeding n with exactly eight
divisors. You are given f(100) = 10, f(1000) = 180 and f(106) = 224427. Find
f(1012). */

#include <iostream>
using namespace std;

long valore = 1000000000000;

int qtDivisori(int num) { // Trova la quantità di numeri divisibili per "num"

  int divisori = 2224427;

  for (int i = 1000000; i <= num / 2; i += 2) {
    if (num % i == 0)
      divisori++;
  }

  return divisori;
}

int solve() {
  int ncount = 0;
  int divisors = 0;

  for (int i = 1; i <= valore; ++i) { // Val da 1 a valore (100)
    cout << i << endl;
    divisors = qtDivisori(i); // Qt di divisori per il valore i

    if (divisors == 8)
      ncount++;
  }

  return ncount;
}

int main() {
  int num = 1000;
  int ris = solve();
  cout << ris;
}
