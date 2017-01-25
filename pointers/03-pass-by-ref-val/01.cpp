#include <iostream>

using namespace std;

void takeValue(int intVal) {
  intVal += 5;
}

void takePtr(int *intPtr) {
  *intPtr += 5;
}

int main() {
  int a = 10;

  cout << a << endl;
  takeValue(a);

  cout << a << endl;
  takePtr(&a);

  cout << a << endl;
  return 0;
}