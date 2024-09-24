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

    Card() {}

    string getName() {
      return suit + " " + name;
    }

    int getValue() {
      return value;
    }
};

Card deck[52];

void makeDeck() {
  //Card deck[52];
  int n = 0;
  for (int i = 1; i < 11; i++) {
    for (int j = 1; j < 5; j++) {
      n += 1; //place holder for now
    }
  }
}

int main() {
  cout << "Hello World! \n";

  Card c1("Test", "Twelve", 12);
  c1.getName();
  c1.getValue();

  makeDeck();

  for (int i = 0; i < 53; i++) {
    cout << deck[i];
  }

  return 0;
}