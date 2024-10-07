#include "Coin.h"

Coin::Coin():Game()
{
    game_name="Монетка";
}

string Coin::coin2str(int p)
{
    string result;
    if (p==1)
        result = "Орёл";
    else
    if (p==2)
        result = "Решка";
    else
        result = "???";

    return result;
}

GameResults Coin::Play()
{
    GameResults result;
    int user_choice, comp_choice;
    string error_coin="Ошибка, выбирайте 1 или 2!";
    cout << "Ваш выбор? " << endl << "\n1 - Орёл" << endl << "\n2 - Решка" << endl << endl;
    cin >> user_choice;
    if (user_choice == 1 || user_choice == 2)
    {
        comp_choice = 1+rand()%2;
        cout << endl << "Ваш выбор: " << coin2str(user_choice) << endl;
        cout << "Выпало: " << coin2str(comp_choice) << endl << endl;
    }
    else
        throw (error_coin);
    if (user_choice == comp_choice)
        result = grWin;
    else
        result = grLose;
    return result;
}
