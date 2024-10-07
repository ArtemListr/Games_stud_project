#include "dice.h"
Dice::Dice():Game()
{
    game_name="Кости";
}

GameResults Dice::Play()
{
     int cubs, user_choice, comp_choice;
    cout <<"Выберите количество кубиков (макс. 10): ";
    cin>> cubs;
    string error_dice ="Вы превысили максимальное количество кубиков";
    int user_s=0, comp_s=0;
     GameResults result;
     if (cubs<=10)
     {
    cubs=cubs%10;
    for (int cub=1;cub<=cubs; cub++)
    {
        user_choice=1+rand()%6;
        comp_choice=1+rand()%6;
        cout <<"Количество ваших очков="<<user_choice<<endl;
        cout <<"Количество очков компьютера="<<comp_choice<<endl;
        user_s=user_choice+user_s;
        comp_s=comp_choice+comp_s;
          }

    cout <<"Вы набрали "<<user_s<<" очков"<<endl;
    cout <<"Компьтер набрал "<<comp_s<<" очков"<<endl;
    if (user_s>comp_s)
        result=grWin;
    else if(user_s<comp_s)
        result=grLose;
    else result=grDraw;
     }
     else throw error_dice;
    return result;
}
