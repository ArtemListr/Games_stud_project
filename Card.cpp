#include "Card.h"

string card_suit(Suits m)
{
    string result;
    switch(m)
    {
        case spades: result="Пики";break;
        case clubs: result="Крести";break;
        case diamonds: result="Буби";break;
        case hearts: result="Черви";break;
        default: result = "???"; break;
    }
    return result;
}

string card_nom(Noms n)
{
    string result;
    switch(n)
    {
        case six: result="Шестерка";break;
        case seven: result="Семерка";break;
        case eight: result="Восьмерка";break;
        case nine: result="Девятка";break;
        case ten: result="Десятка";break;
        case jack: result="Валет";break;
        case queen: result="Дама";break;
        case king: result="Король";break;
        case ace: result="Туз";break;
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
