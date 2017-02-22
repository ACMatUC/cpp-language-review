#include <iostream>
#include <string>

using namespace std;

class SubData {
private:
  int x;

public:

  SubData() {
    cout << "SubData::SubData()" << endl;
    this->x = 0;
  }

  SubData(int inX) {
    cout << "SubData::SubData(int)" << endl;
    this->x = inX;
  }

  void setData(int inX) {
    cout << "SubData::setData(int)" << endl;
    this->x = x;
  }
};

class LargePart {
private:
  SubData s1, s2, s3;

public:
  LargePart(int a, int b, int c) {
    cout << "LargePart::LargePart()" << endl;
    s1.setData(a);
    s2.setData(b);
    s3.setData(c);
  }
};

class LargePart2 {
private:
  SubData s1, s2, s3;

public:
  LargePart2(int a, int b, int c): s1(a), s2(b), s3(c) {
    cout << "LargePart::LargePart()" << endl;
  }
};

int main() {
  LargePart lp(1, 2, 3);

  // LargePart2 lp2(1, 2, 3);
  return 0;
}