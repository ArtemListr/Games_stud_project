#include "dice.h"
Dice::Dice():Game()
{
    game_name="�����";
}

GameResults Dice::Play()
{
     int cubs, user_choice, comp_choice;
    cout <<"�������� ���������� ������� (����. 10): ";
    cin>> cubs;
    string error_dice ="�� ��������� ������������ ���������� �������";
    int user_s=0, comp_s=0;
     GameResults result;
     if (cubs<=10)
     {
    cubs=cubs%10;
    for (int cub=1;cub<=cubs; cub++)
    {
        user_choice=1+rand()%6;
        comp_choice=1+rand()%6;
        cout <<"���������� ����� �����="<<user_choice<<endl;
        cout <<"���������� ����� ����������="<<comp_choice<<endl;
        user_s=user_choice+user_s;
        comp_s=comp_choice+comp_s;
          }

    cout <<"�� ������� "<<user_s<<" �����"<<endl;
    cout <<"�������� ������ "<<comp_s<<" �����"<<endl;
    if (user_s>comp_s)
        result=grWin;
    else if(user_s<comp_s)
        result=grLose;
    else result=grDraw;
     }
     else throw error_dice;
    return result;
}
