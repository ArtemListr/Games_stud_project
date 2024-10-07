#ifndef HIGH_CARD_H_INCLUDED
#define HIGH_CARD_H_INCLUDED
#include "Games.h"
#include "Card.h"

struct Cards
{
    Suits suit;
    Noms nom;
};
 class Elder_Card:public Game
 {
 private:
    GameResults Play();
    string card_str(Cards x);
 public:
    Elder_Card();
 };


#endif // HIGH_CARD_H_INCLUDED
