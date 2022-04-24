/* Successione di Fibonacci */

#include <iostream>
using namespace std;

int main() {
  int numPrec1 = 0, numPrec2 = 1, num = 0;

  for (int num = 1; num < 1000; ++num) {
    // Primi due termini.
    if (num == 1) {
      cout << numPrec1 << ", ";
    }
    if (num == 2) {
      cout << numPrec2 << ", ";
    }
    num = numPrec1 + numPrec2;
    numPrec1 = numPrec2;
    numPrec2 = num;

    cout << num << ", ";
  }
}