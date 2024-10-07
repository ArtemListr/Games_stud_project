#include "Coin.h"

Coin::Coin():Game()
{
    game_name="�������";
}

string Coin::coin2str(int p)
{
    string result;
    if (p==1)
        result = "���";
    else
    if (p==2)
        result = "�����";
    else
        result = "???";

    return result;
}

GameResults Coin::Play()
{
    GameResults result;
    int user_choice, comp_choice;
    string error_coin="������, ��������� 1 ��� 2!";
    cout << "��� �����? " << endl << "\n1 - ���" << endl << "\n2 - �����" << endl << endl;
    cin >> user_choice;
    if (user_choice == 1 || user_choice == 2)
    {
        comp_choice = 1+rand()%2;
        cout << endl << "��� �����: " << coin2str(user_choice) << endl;
        cout << "������: " << coin2str(comp_choice) << endl << endl;
    }
    else
        throw (error_coin);
    if (user_choice == comp_choice)
        result = grWin;
    else
        result = grLose;
    return result;
}
