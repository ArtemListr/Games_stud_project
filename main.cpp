#include <iostream>
#include <ctime>
#include "Coin.h"
#include "RSP.h"
#include "Elder_Card.h"
#include "Dice.h"
#include "Point_21.h"


using namespace std;

const int n_games=5;



int main()
{
    setlocale(LC_ALL, "Russian");
    Game* games[n_games];
    games[0]= new RSP;
    games[1]= new Coin;
    games[2]= new Dice;
    games[3]= new Elder_Card;
    games[4]= new Point21;
     int user_choice;
    do
    {
        cout << "Выберите игру:" << endl;
        for (int i=0; i<n_games; i++)
            cout << i+1 << " - " << games[i]->Get_name() << endl;
        cout << n_games + 1 << " - Статистика игр" << endl;
        cout << "0 - Выход из игры" << endl;
        cout<<endl;
        cin >> user_choice;
        cout<<endl;
        if (user_choice>0 && user_choice<=n_games)
           try{
            games[user_choice-1]->Round();
           }
           catch(string error_games)
            {
                cout<<error_games<<endl;
            }
        else if(user_choice==n_games+1)
                for (int i=0; i<n_games;i++)
                cout <<games[i]->Get_score();
        cout<<endl<<endl;
    }
    while (user_choice>=1 && user_choice<=n_games+1);
    cout<<"До свидания!"<<endl;
    delete games;
    return 0;

    }


