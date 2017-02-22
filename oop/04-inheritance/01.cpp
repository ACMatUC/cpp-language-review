#include <iostream>
#include <string>

using namespace std;

class Person {
private:

  string name, address, ssn;

public:

  Person(string inName, string inAddress, string inSSN) : name(inName), address(inAddress), ssn(inSSN) {
    /* More logic here if necessary */
  }

  string getName() {
    return this->name;
  }

  string getAddress() {
    return this->address;
  }

  string getSSN() {
    return ssn; // `this->` is not necessary
  }
};

class Student: public Person {
private:
  string mNumber;

public:

  Student(string inName, string inAddress, string inSSN, string inMNumber) : Person(inName, inAddress, inSSN), mNumber(inMNumber) {
    /* Again, more logic if we needed */
  }

  string getMNumber() {
    return this->mNumber;
  }
};

/**
 * Access modifier, why does getName() work on student?
 * Theoretical memory layout of a "Student"
 */

int main() {
  Person alice("alice", "215 Street Here" , "XXX-XX-XXXX");

  cout << alice.getName() << endl;
  cout << alice.getAddress() << endl;
  cout << alice.getSSN() << endl;

  Student sam("sam", "215 Street Here", "XXX-XX", "M02995953");

  cout << sam.getName() << endl;
  cout << sam.getMNumber() << endl;
  return 0;
}