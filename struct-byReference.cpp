#include <iostream>

using namespace std;

struct number {
  int n;
};

void increment(number&);
void initializeFunction();

int main() {
  initializeFunction();

  return 0;
}

void increment(number& n2) {
  n2.n++;
}

void initializeFunction() {
  number n1;
  
  n1.n = 10;

  cout << "Before calling increment function: " << n1.n << endl;
  increment(n1);
  
  cout << "After calling increment function: " << n1.n << endl;
}