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
  //deck.push_back(Card("Test", "Twelve", 12));

  int vn = 1;
  string suit = "Test";
  string num = "One";
  for (int i = 1; i < 54; i++) {
    deck.push_back(Card(suit, num, vn));
    if ((i%4 == 0) && (vn < 10)) {
      vn+=1;
      if (vn == 2) { num = "Two"; } else if (vn == 3) { num = "Three"; } else if (vn == 4) { num = "Four"; } else if (vn == 5) { num = "Five"; } else if (vn == 6) { num = "Six";} else if (vn == 7) { num = "Seven"; } else if (vn == 8) { num = "Eight"; } else if (vn == 9) { num = "Nine"; } else if (vn >= 10) { num = "IDK"; } 
      //
    }
  }
}

int main() {
  cout << "Hello World! \n";

  Card cc("Test", "Twelve", 12);
  cc.getFullName();
  cc.getValue();

  makeDeck();

  for (int i = 0; i < 52; i++) {
    cout << deck[i].getFullName();
    cout << deck[i].getValue() << endl;
  }

  return 0;
}