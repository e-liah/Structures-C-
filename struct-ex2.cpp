#include <iostream>

using namespace std;

struct Person {
  char name[50];
  int age;
  float salary;
};

void strSample ();

int main() {
  strSample();

  return 0;
}

void strSample () {
  Person p1;
  
  cout << "Enter full name: ";
  cin.get(p1.name, 50); //c-string

  cout << "Enter age: ";
  cin >> p1.age; //integer

  cout << "Enter salary: ";
  cin >> p1.salary; //floating point

  cout << "\nDisplaying Information." << endl;
  cout << "Name: " << p1.name << endl;
  cout << "Age: " << p1.age << endl;
  cout << "Salary: " << p1.salary;
}