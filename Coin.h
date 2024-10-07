#ifndef COIN_H_INCLUDED
#define COIN_H_INCLUDED
#include "Games.h"

class Coin:public Game
{
public:
    Coin();

private:
    GameResults Play();

    string coin2str(int p);

};

#endif // COIN_H_INCLUDED
