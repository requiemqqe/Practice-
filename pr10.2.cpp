#include <iostream>
#include <algorithm>

using namespace std;

enum Suit {
    Hearts,
    Diamonds,
    Clubs,
    Spades
};

enum Rank {
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

struct Card {
    Suit suit;
    Rank rank;
};

bool compareSuit(const Card& card1, const Card& card2) {
    return card1.suit < card2.suit;
}

bool compareRank(const Card& card1, const Card& card2) {
    if (card1.suit == card2.suit) {
        return card1.rank < card2.rank;
    }
    return false;
}

void printDeck(const array<Card, 52>& deck) {
    for (int i = 0; i < 52; ++i) {
        char suitChar;
        switch (deck[i].suit) {
            case Hearts:
                suitChar = 'H';
                break;
            case Diamonds:
                suitChar = 'D';
                break;
            case Clubs:
                suitChar = 'C';
                break;
            case Spades:
                suitChar = 'S';
                break;
        }
        cout << suitChar << static_cast<int>(deck[i].rank) + 1 << " ";
    }
    cout << endl;
}

int main() {
    array<Card, 52 > deck = {};
    int index = 0;
    for (int suit = 0; suit < 4; ++suit) {
        for (int rank = 0; rank < 13; ++rank) {
            deck[index].suit = static_cast<Suit>(suit);
            deck[index].rank = static_cast<Rank>(rank);
            ++index;
        }
    }

    cout << "Unsorted deck: ";
    printDeck(deck);

    sort(deck.begin(), deck.end(), compareSuit);
    cout << "Sorted by suit: ";
    printDeck(deck);

    sort(deck.begin(), deck.end(), compareRank);
    cout << "Sorted by suit and rank: ";
    printDeck(deck);

    return 0;
}
