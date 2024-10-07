#include "Point_21.h"
#include <ctime>

Card::Card(Suits m,Noms n)
{
    Set_nom_card(n);
    Set_suit_card(m);
}

string Card::str()
{
    return  card_nom(nom) +" "+ card_suit(suit);
}

int Card::value()
{
    int result;
    switch(nom)
    {
        case six:
        result=6;
        break;
    case seven:
        result=7;
        break;
    case eight:
        result=8;
        break;
    case nine:
        result=9;
        break;
    case ten:
        result=10;
        break;
    case jack:
        result=2;
        break;
    case queen:
        result=3;
        break;
    case king:
        result=4;
        break;
    case ace:
        result=11;
        break;

    }
    return result;
}

Point21::Point21():Game()
{
    game_name="Двадцать одно";
    for (int i=0; i<num_of_suits; i++)
    {
        for (int j=0; j<num_of_noms; j++)
        {
            Deck[i*9+j]= new Card(int_to_card_suit(i),int_to_card_nom(j));
        }
    }
}
Point21::~Point21()
{
    for (int i = 0; i < deck_size; i++)
    {
        delete Deck[i];
    }
}

 void Hand::Add_card(Card* p_card)
 {
     if (p_card!=NULL)
     {
         Cards_list* new_card = new Cards_list;
         new_card->card = p_card;
         new_card->next_card = cards;
         cards = new_card;
         cards_count++;
         points = points + p_card->value();
     }
 }

 string Hand::Get_cards()
 {
     string result = "";
     Cards_list* tmp = cards;
     cout<<endl;
     cout<<"Карты на руке:";
     while (tmp!=NULL)
     {
         result = result + "\n " + tmp->card->str();
         tmp=tmp->next_card;
     }
     return result;
 }

 Hand::~Hand()
 {
     Cards_list* tmp = cards;
     while (tmp!=NULL)
     {
         Cards_list* del_card = tmp;
         tmp=tmp->next_card;
         delete del_card;
     }
 }
 void Hand::Show()
 {
     cout << name << endl;
     cout << Get_cards() << endl;
     cout <<"Количество очков: "<<points << endl<< endl;
 }

 void Point21::Shuffle(int shuf)
 {
     srand(time(0));
      for (int i = 0; i < shuf; i++)
    {
        int index1 = rand()%deck_size;
        int index2 = rand()%deck_size;
        swap(Deck[index1], Deck[index2]);
    }
 }

 GameResults Point21::Play()
 {
     GameResults result;
     string error_point21="Вводите только указанные варианты.";
     string game_over="Конец игры.";
     int user_choice;
     int num_card=0;
     Hand user("Игрок");
     Hand comp("Компьютер");
     Shuffle();
     user.Add_card(Deck[num_card]);
    num_card++;
    comp.Add_card(Deck[num_card]);
    num_card++;
    do
    {
        user.Show();
        cout<<endl;
        cout << "Добавить карту?" << endl << "1 - Да" << endl << "2 - Нет" << endl << "0-Закончить партию" << endl;
        cin >> user_choice;
        cout<<endl;

        if (user_choice==1)
        {
            user.Add_card(Deck[num_card]);
            num_card++;
        }
    }
    while ( (user_choice==1) && (user.Get_points() < 21) );
    cout << " " << endl;
    if (user.Get_points()==21)
    {
        result = grWin;
    }
    else if (user.Get_points()>21)
    {
        result = grLose;
    }
    else if (user_choice==2)
    {
        do
        {
            comp.Show();
            comp.Add_card(Deck[num_card]);
            num_card++;
        }
        while (comp.Get_points()<18);

        if (comp.Get_points()==21)
        {
            result = grLose;
        }
        else if (comp.Get_points()>21)
        {
            result = grWin;
        }
        else if (comp.Get_points()<user.Get_points() )
        {
            result = grWin;
        }
        else if (comp.Get_points()>user.Get_points() )
        {
            result = grLose;
        }
        else
        {
            result=grDraw;
        }
    }
    else if (user_choice==0)
        throw game_over;
    else throw error_point21;
    cout<<"_______________________________________"<<endl;
    cout<<"Итог игры:"<<endl;
    user.Show();
    comp.Show();
    cout<<"_______________________________________"<<endl;
    return result;
}











