#include <iostream>
using namespace std;
#include "OverloadNewDelete2a.cpp" //File included in the repository and is used as a source file for object student
int main() {
  Student *s;
  s = new Student(Saraswathi, 555);
  s -> display();
  delete s;
  return 0;
}
