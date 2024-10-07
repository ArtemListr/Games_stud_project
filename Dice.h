#ifndef DICE_H_INCLUDED
#define DICE_H_INCLUDED
#include "Games.h"

class Dice: public Game
{
public:
    Dice();
private:
    GameResults Play();
};


#endif // DICE_H_INCLUDED
