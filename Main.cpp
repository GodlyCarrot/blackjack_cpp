#include <iostream>
#include <vector>
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
      return name + " of " + suit + " ";
    }

    int getValue() {
      return value;
    }
};

std::vector<Card> deck;

void makeDeck() {
  deck.push_back(Card("Test", "Twelve", 12));
}

int main() {
  cout << "Hello World! \n";

  Card cc("Test", "Twelve", 12);
  cc.getFullName();
  cc.getValue();

  makeDeck();

  /*
  for (int i = 0; i < 52; i++) {
    cout << deck[i].getFullName();
    cout << deck[i].getValue() << endl;
  }
  */

  cout << deck[0].getFullName();

  return 0;
}