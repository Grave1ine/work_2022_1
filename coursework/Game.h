#ifndef GAME_H
#define GAME_H
#include "Board.h"

struct Game                            //
{
    GameBoard * board;                 //переменная board типа указатель структуры GameBoard
};

Game * BuildingGame();                 //Функция возвращающая указатель типа Game
void RunGame(Game * game);             //функция запуска игры принимает переменную game типа указатель
void DestroyGame(Game * game);         //функция удаления игры принимает переменную game типа указатель

#endif // GAME_H
