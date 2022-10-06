#include "palette.h"
#include <curses.h>

void InitPalette()
{
    start_color();                                              //инициализация цветов
    init_pair(Board_pol, COLOR_BLACK, COLOR_RED);              //инициализация палитры (имя из перечисления, цвет символов, цвет фона)
}
