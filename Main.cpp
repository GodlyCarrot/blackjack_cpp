#include <iostream>
using namespace std;

class Card {
  public:
    string suit;
    string name;
    int value;

    Card(string x, string y, int z) {
      suit = x;
      name = y;
      value = z;
    }

    string getName() {
      return suit + " " + name;
    }

    int getValue() {
      return value;
    }
};

int main() {
  cout << "Hello World! \n";

  Card c1("Test", "Twelve", 12);
  c1.getName();
  c1.getValue();

  return 0;
}