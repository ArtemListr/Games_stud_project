#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum GameResults {grWin, grLose, grDraw, grUnknown};
string GameResult2str(GameResults gr);


class Game
{
    private:
        virtual GameResults Play();
    public:
        Game();
        int Get_games_count();
        int Get_wins_count();
        int Get_loses_count();
        int Get_draws_count();
        void Round();
        string Get_score();
        string Get_name();

    protected:
        int games_count;
        int wins_count;
        int loses_count;
        int draws_count;
        string game_name;



};

#endif // GAMES_H
