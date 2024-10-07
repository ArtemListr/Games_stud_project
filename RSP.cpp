#include "RSP.h"
using namespace std;
RSP::RSP():Game()
{
    game_name="Камень, ножницы, бумага";
}

string RSP::Figure2str(Figures f)
{
    string result;
    switch (f)
    {
        case figRock: result = "Камень"; break;
        case figScissors: result = "Ножницы"; break;
        case figPaper: result = "Бумага"; break;
        default: result = "Неизвестная фигура"; break;
    }
    return result;
}

Figures RSP::int2Figure(int p)
{
    Figures result;
    switch (p)
    {
        case 1: result = figRock; break;
        case 2: result = figScissors; break;
        case 3: result = figPaper; break;
        default: result = figUnknown; break;
    }
    return result;
}

GameResults RSP::Play()
{
    string error_rsp = "Ошибка. Вводите правильный код фигуры!";
    GameResults result;
    Figures user_figure, comp_figure;
    int user_choice;
    cout <<"1-Камень"<<endl;
    cout <<"2-Ножницы"<<endl;
    cout <<"3-Бумага"<<endl;
    cout <<"Выберите предмет: ";
    cin >> user_choice;
    user_figure = int2Figure(user_choice);
    if (user_figure!=figUnknown)
    {
    comp_figure = int2Figure(1+rand()%3);
    cout << "Ваш предмет: " << Figure2str(user_figure) << endl;
    cout << "Предмет, который выбрал компьютер: " << Figure2str(comp_figure) << endl;
    switch(user_figure)
    {
        case figRock: if (comp_figure==figScissors)
                        result = grWin;
                      else
                      if (comp_figure==figPaper)
                        result = grLose;
                      else
                        result = grDraw;
                      break;
        case figScissors: if (comp_figure==figPaper)
                        result = grWin;
                      else
                      if (comp_figure==figRock)
                        result = grLose;
                      else
                        result = grDraw;
                      break;
        case figPaper: if (comp_figure==figRock)
                        result = grWin;
                      else
                      if (comp_figure==figScissors)
                        result = grLose;
                      else
                        result = grDraw;
                      break;
    }
     }
    else
        throw error_rsp;
    return result;
}

