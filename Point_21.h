#ifndef CARD_21_H_INCLUDED
#define CARD_21_H_INCLUDED
#include "Games.h"
#include "Card.h"
using namespace std;

class Card
{
public:
    Suits suit;
    Noms nom;
    Card(Suits m, Noms n);
    void Set_nom_card(Noms n){nom=n;};
    void Set_suit_card(Suits m){suit=m;};
    string str();
    int value();

};

struct Cards_list
{
    Card* card;
    Cards_list* next_card;
};

class Hand
{
private:
    Cards_list* cards;
    string name;
    int cards_count;
    int points;
public:
    Hand (string p_name):cards_count(0), points(0), cards(NULL), name(p_name){};
    ~Hand();
    void Add_card(Card* p_card);
    string Get_cards();
    void Show();
    string Get_name()
    {
        return name;
    };
    int Get_cards_count()
    {
        return cards_count;
    };
    int Get_points()
    {
        return points;
    };


};

class Point21:public Game
{
private:
    Card* Deck[deck_size];
    void Shuffle(int shuf=1000);
    GameResults Play();
public:
    Point21();
    ~Point21();
};




#endif // CARD_21_H_INCLUDED
