/* You are given two numbers a and b. Create a function that returns the next
 * number greater than a and b and divisible by b. */
// 17 8 -> 24

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Inserire il valore per 'a': ";
  cin >> a;
  cout << "Inserire il valore per 'b': ";
  cin >> b;

  while (a % b != 0) {
    a++;
  }

  cout << a;
}