#include <curses.h>
#include <windows.h>


int main()
{
    int control = 0;
    int y = 15, x = 15, y1 = 16, x1 = 15, y2 = 17, x2 = 15;

    initscr();
    curs_set(0);             //не мигает курсор
    noecho();                //убрать фантомный символ
    keypad(stdscr, TRUE);    //подключает клавиатуру
    halfdelay(1);            //если новая клавиша не нажата то нажата предыдущая

    int last_control = 0;
    int b = 0;


    int i = 0;

    do
    {

        clear();
        if (control != -1)
        {
            last_control = control;  //last_control фиксирует в себе значение control
        }

        if (control == KEY_UP)       //last_control == KEY_UP будет двигаться как змейка
        {
            y --;
            y1 --;
            y2 --;
        }
        if (control == KEY_DOWN)
        {
            y ++;
            y1 ++;
            y2 ++;
        }
        if (control == KEY_LEFT)
        {
        x --;
        x1 --;
        x2 --;
        }
        if (control == KEY_RIGHT)
        {
        x ++;
        x1 ++;
        x2 ++;
        }

                if (b > 0)
                {
                    last_control = 0;
                    y ++;
                    y1 ++;
                    y2 ++;
                    b--;
                }

                if (last_control == 32)
                {
                    if (y > 6)
                    {
                        y --;
                        y1 --;
                        y2 --;
                    }
                    else
                    {
                        last_control = 0;
                        b = 9;
                    }
                }


                mvprintw(y, x,   "(|__/)");
                mvprintw(y1, x1, "(='.'=)");
                mvprintw(y2, x2, "('')_('')");

if (control != -1){
if (i == 0) {
                    mvprintw(y, x,   "(|__/)");
                    mvprintw(y1, x1, "(='.'=)");
                    mvprintw(y2, x2, "('')_('')");
                    i++;}
else if (i == 1) {
                    mvprintw(y, x,   "(|__/)");
                    mvprintw(y1, x1, "(='.'=)");
                    mvprintw(y2, x2, "(..)_(..)");
                    i++;}
else if (i == 2){
                    mvprintw(y, x,   "  (|__/)");
                    mvprintw(y1, x1, "  (='.'=)");
                    mvprintw(y2, x2, "(..)_(..)");
                    i = 0;}
}



    }
    while ((control = getch()) != 27);    //control ждет ввода, если равен ESC выход


    //getch();             //ожидание ввода (принимает введенное значение)

    endwin();              //какая то библиотечная команда
    return 0;
}
