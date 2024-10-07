#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std;

enum Suits{spades=0,clubs=1,diamonds=2,hearts=3,munknown=4};
enum Noms{six,seven,eight,nine,ten,jack,queen,king,ace,nunknown};

Suits int_to_card_suit (int x);
Noms int_to_card_nom (int x);
string card_suit(Suits m);
string card_nom(Noms n);

const int num_of_suits=4;
const int num_of_noms=9;
const int deck_size=num_of_suits*num_of_noms;

#endif // CARD_H_INCLUDED
