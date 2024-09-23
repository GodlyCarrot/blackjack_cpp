#include <iostream>
using namespace std;

class Card {
  public:
    string name;
    int value;

    Card(string x, int y) {
      name = x;
      value = y;
    }
};

int main() {
  cout << "Hello World!";
  return 0;
}