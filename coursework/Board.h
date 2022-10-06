#ifndef BOARD_H
#define BOARD_H

struct GameBoard                         //структура игрового пространства
{
    int width;
    int height;
};

GameBoard * BuildBoard();                //функция возвращающая указатель типа GameBoard
void DestroyBoard(GameBoard * board);    //функция удаления поля принимает указатель board типа GameBoard
void PrintBoard(GameBoard * board);      //функция вывода поля принимает указатель board типа GameBoard

#endif // BOARD_H
