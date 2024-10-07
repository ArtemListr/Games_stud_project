#ifndef RSP_H_INCLUDED
#define RSP_H_INCLUDED
#include "Games.h"
enum Figures {figRock, figScissors, figPaper, figUnknown};

class RSP:public Game
{
public:
    RSP();
private:
    GameResults Play();
    string Figure2str(Figures f);
    Figures int2Figure(int p);
};
#endif // RSP_H_INCLUDED
