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

    void setSuit(string x) {
      suit = x;
    }

    void setName(string y) {
      name = y;
    }

    void setValue(int z) {
      value = z;
    }

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
  int v = 1;
  const float constant = 0.15;
  for (int i = 1; i < 53; i++) {
    deck[n].setValue(v);
    n+=1;
    if ((i%4 == 0) && (i <= 36)) {
      v+=1;
    }
  }
}

int main() {
  cout << "Hello World! \n";

  Card c1("Test", "Twelve", 12);
  c1.getName();
  c1.getValue();

  makeDeck();

  for (int i = 0; i < 52; i++) {
    cout << deck[i].getValue() << endl;
  }

  return 0;
}