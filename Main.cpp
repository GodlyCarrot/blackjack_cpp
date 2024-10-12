#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
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
      return name + " of " + suit;
    }

    int getValue() {
      return value;
    }
};

std::vector<Card> deck;

void makeDeck() {
  //deck.push_back(Card("Test", "Twelve", 12));

  int vn = 1;
  string suit = "Hearts";
  string num = "Ace";
  for (int i = 1; i < 54; i++) {
    deck.push_back(Card(suit, num, vn));

    //
    if (i%4 == 0) {
      vn+=1;
      suit = "Hearts";

      if (vn == 2) { 
        num = "Two"; 
      } else if (vn == 3) { 
        num = "Three"; 
      } else if (vn == 4) { 
        num = "Four"; 
      } else if (vn == 5) { 
        num = "Five"; 
      } else if (vn == 6) {
        num = "Six";
      } else if (vn == 7) {
        num = "Seven";
      } else if (vn == 8) {
        num = "Eight"; 
      } else if (vn == 9) {
        num = "Nine";
      } else if (vn >= 10) {
        if (i < 40) {
          num = "Ten";
          vn-=0;
        } else if (i < 41) {
          num = "Jack";
          vn-=1;
        } else if (i < 45) {
          num = "Queen";
          vn-=1;
        } else if (i < 50) {
          num = "King";
          vn-=1;
        }
      }
    } else if (i%4 == 1) {
      suit = "Spades";
    } else if (i%4 == 2) {
      suit = "Diamonds";
    } else if (i%4 == 3) {
      suit = "Clubs";
    }
  }
}

void play() {
  srand(time(0));
  int cOne = rand() % 52;
  int cTwo = rand() % 52;

  int value = deck[cOne].getValue() + deck[cTwo].getValue();

  cout << "You cards are: ";
  cout << deck[cOne].getFullName() + " and " + deck[cTwo].getFullName() << endl;
  cout << "The value is: ";
  cout << value << endl;
  cout << "\nWould you like to hit or stand?"; 
}

int main() {
  cout << "Welcome to BlackJack! \n";

  Card cc("Test", "Twelve", 12);
  cc.getFullName();
  cc.getValue();

  makeDeck();
  play();

  /*
  for (int i = 0; i < 52; i++) {
    cout << deck[i].getFullName() + " ";
    cout << deck[i].getValue() << endl;
  }
  */

  return 0;
}