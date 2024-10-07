#include "Card.h"

string card_suit(Suits m)
{
    string result;
    switch(m)
    {
        case spades: result="����";break;
        case clubs: result="������";break;
        case diamonds: result="����";break;
        case hearts: result="�����";break;
        default: result = "???"; break;
    }
    return result;
}

string card_nom(Noms n)
{
    string result;
    switch(n)
    {
        case six: result="��������";break;
        case seven: result="�������";break;
        case eight: result="���������";break;
        case nine: result="�������";break;
        case ten: result="�������";break;
        case jack: result="�����";break;
        case queen: result="����";break;
        case king: result="������";break;
        case ace: result="���";break;
         default: result="???";break;
    }
    return result;
}

Suits int_to_card_suit (int x)
{
    Suits result;
    switch(x)
    {
        case 0: result=spades;break;
        case 1: result=clubs;break;
        case 2: result=diamonds;break;
        case 3: result=hearts;break;
        case 4: result=munknown;break;

    }
    return result;
}

Noms int_to_card_nom (int x)
{
    Noms result;
    switch(x)
    {
        case 0: result=six;break;
        case 1: result=seven;break;
        case 2: result=eight;break;
        case 3: result=nine;break;
        case 4: result=ten;break;
        case 5: result=jack;break;
        case 6: result=queen;break;
        case 7: result=king;break;
        case 8: result=ace;break;
    }
    return result;
}
