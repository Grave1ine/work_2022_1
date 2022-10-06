#include "palette.h"
#include "Board.h"
#include <curses.h>

GameBoard * BuildBoard()                  //функция возвращающая указатель типа GameBoard
{
    GameBoard * board = new GameBoard;    //выделение динамической памяти под GameBoard и определение на нее указателя *board
    board -> height = 110;                //ширина игрового поля
    board -> width = 30;                  //высота игрового поля
    return board;
}

void DestroyBoard(GameBoard * board)      //функция удаления поля принимает указатель board типа GameBoard
{
    delete board;                         //удаление структуры GameBoard из динамической памяти УТОЧНИТЬ!!!!
}

void PrintBoard(GameBoard * board)        //функция вывода поля принимает указатель board типа GameBoard
{
    if(!board)                            //проверка на nullptr
    {
        return;
    }
    for (int i = 0; i < board -> width; ++ i)     //указатель на выстоу игрю поля
    {
        for (int j = 0; j < board -> height; ++ j)//указатель на ширину игрю поля
        {
            move(i, j);                           //заполнение поля?
            chtype ch = '*' | COLOR_PAIR(Board_pol);//функционал из библиотеки
            addch(ch);                           //заполнение поля (функционал из библиотеки)
        }
    }
}
