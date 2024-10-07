#include "Games.h"
#include <sstream>

Game::Game()
{
    games_count=0;
    wins_count=0;
    loses_count=0;
    draws_count=0;

    game_name="";
}

void Game::Round()
{
    GameResults game_result;
    cout<<"����: "<<game_name<<endl;
    game_result=Play();
    cout<<"��������� ����: "<<GameResult2str(game_result)<<endl;
    games_count++;
    if (game_result==grWin)
        wins_count++;
    else if (game_result==grLose)
        loses_count++;
    else if (game_result==grDraw)
        draws_count++;
}

string GameResult2str(GameResults gr)
{
    string result;
    switch (gr)
    {
        case grWin: result = "������!"; break;
        case grLose: result = "���������..."; break;
        case grDraw: result = "�����"; break;
        default: result = "�� ��������"; break;
    }
    return result;
}

GameResults Game::Play()
{
    return grUnknown;
}

int Game::Get_games_count()
{
    return games_count;
}

int Game::Get_wins_count()
{
    return wins_count;
}

int Game::Get_loses_count()
{
    return loses_count;
}

int Game::Get_draws_count()
{
    return draws_count;
}

string Game::Get_name()
{
    return game_name;
}

string Game::Get_score()
{
    stringstream ss;
    ss<<game_name<<"\n  ���������� ���: "<<games_count<<", �����: "<<wins_count<<", ���������: "<<loses_count<<", ������: "<<draws_count<<endl;
    return ss.str();
}





