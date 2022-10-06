#include "Game.h"
#include "palette.h"
#include <curses.h>


Game * BuildingGame()                  //Функция возвращающая указатель типа Game
{
    initscr();                         //включение графической библиотеки
    curs_set(0);                       //убирает мигающий курсор в консоли
    InitPalette();
    Game * game = new Game;            //выделение динамической памяти под Game и определение указателя *game, структура динамическая у нее нет имени
    game -> board = BuildBoard();      //присваивает значение BuildBoard в указатель board который лежит в динамической памяти структуры Game
    return game;                       //возвращает адрес структуры Game
}

void DestroyGame(Game * game)          //функция удаления игры принимает переменную game типа указатель
{
    if (!game)                         //проверка на nullptr (если не ссылается на ноль то)
    {
        return;
    }
    DestroyBoard(game -> board);       //функция DestroyBoard принимает значение
    delete game;                       //удаление игры
    endwin();                          //отключение графической библиотеки
}

void RunGame(Game * game)              //функция запуска игры принимает переменную game типа указатель
{
    if (!game)                         //проверка на nullptr
    {
        return;
    }
    PrintBoard(game -> board);         //функция PrintBoard принимает значение
    getch();
}


