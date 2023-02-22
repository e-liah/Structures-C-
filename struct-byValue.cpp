#include <iostream>

using namespace std;

struct Distance {
  int kilometer, meters;
};

void TotalDistance(Distance);
void initializeFunction();

int main() {
  initializeFunction();

  return 0;
}

void TotalDistance (Distance d1, Distance d2) {
  Distance d;

  d.kilometer = (d1.kilometer + d2.kilometer);
  d.meters = (d1.meters + d2.meters);

  cout << "Total distance is " << d.kilometer << " Kilometers" << endl;
  cout << "Total distance is " << d.meters << " meters" << endl;
}

void initializeFunction() {
  Distance Distance1, Distance2;

  Distance1.kilometer = 10;
  Distance2.kilometer = 9;
  Distance1.meters = Distance1.kilometer * 1000;
  Distance2.meters = Distance2.kilometer * 1000;
  TotalDistance(Distance1, Distance2);
}