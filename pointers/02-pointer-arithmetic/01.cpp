#include <iostream>

using namespace std;

int main() {
  int val = 10;
  int array[10] = {6, 7, 8, 9};

  cout << val << endl;
  
  cout << array << endl;
  cout << array + 1 << endl;
  cout << array + 2 << endl;
  cout << array + 3 << endl;
  
  cout << array[0] << endl;
  cout << *(array + 1) << endl;
  cout << array[2] << endl;
  cout << array[3] << endl;
  return 0;
}