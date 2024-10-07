#include "Elder_Card.h"

Elder_Card::Elder_Card():Game()
{
    game_name="Старшая карта";
}


string Elder_Card::card_str(Cards x)
{
    return card_nom(x.nom) +" "+ card_suit(x.suit);
}

GameResults Elder_Card::Play()
{
    GameResults result;
    Cards user_card, comp_card;
    Cards deck[deck_size];

    for(int i=0; i<num_of_suits; i++)
        for(int j=0; j<num_of_noms; j++)
        {
            deck[i*num_of_noms+j].nom=int_to_card_nom(j);
            deck[i*num_of_noms+j].suit=int_to_card_suit(i);
        }

    user_card=deck[rand()%deck_size];
    comp_card=deck[rand()%deck_size];

    cout<<"Вы выбрали карту:"<<card_str(user_card)<<endl;
    cout<<"Карта компьютера:"<<card_str(comp_card)<<endl;

     if ((user_card.nom>comp_card.nom)||((user_card.nom==comp_card.nom)&&(user_card.suit>comp_card.suit)))
        result=grWin;
    else
    if ((user_card.suit==comp_card.suit)&&(user_card.nom==comp_card.nom))
    result=grDraw;
    else
    result=grLose;
    return result;
}

