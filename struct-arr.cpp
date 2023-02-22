#include <iostream>

using namespace std;

struct Point {
  int x, y;
};

void strArray ();

int main() {
  strArray();

  return 0;
}

void strArray () {
  struct Point arr[10];
  arr[0].x = 10;
  arr[0].y = 20;
  arr[1].x = 3;
  arr[1].y = 13;

  cout << arr[0].x << " " << arr[0].y << endl;
  cout << arr[1].x << " " << arr[1].y << endl;
}