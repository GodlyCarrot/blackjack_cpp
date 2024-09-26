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

    string getFullName() {
      return suit + " " + name + " ";
    }

    int getValue() {
      return value;
    }
};

Card deck[52];

void makeDeck() {
  //Card deck[52];

  //adds card values
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

  int n2 = 0;
  for (int j = 0; j < 52; j++){
    if (deck[n2].getValue() == 1) {
      deck[n2].setName("One");
      n2+=1;
    }
  }
}

int main() {
  cout << "Hello World! \n";

  Card c1("Test", "Twelve", 12);
  c1.getFullName();
  c1.getValue();

  makeDeck();

  for (int i = 0; i < 52; i++) {
    cout << deck[i].getFullName();
    cout << deck[i].getValue() << endl;
  }

  return 0;
}