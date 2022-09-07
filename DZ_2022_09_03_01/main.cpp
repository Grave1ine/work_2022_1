#include <stdio.h>
#include <stdlib.h>   //для рандома
#include <time.h>     //время тоже для рандома
//замена max и последнего отрицательного значений
int main()
{
int M[40];
srand(time(nullptr));           //рандомим массив и заполняем его
for(int i = 0; i < 40; ++i)
{
    M[i] = rand() % 100 -50;    //задается интервал верхний и нижний предел рандома
    printf("%3d\n", M[i]);
}
int i;
int max = 0, maxx;
for(i = 0; i < 40; ++ i)        //находим max значение
{
    if(M[i] >= max)
    {
        max = M[i];
        maxx = i;               //записываем адрес обнаруженного значения
    }
}
int min = 0, minn;
for(i = 0; i < 40; ++ i)        //находим последнее min значение (если поставить M[i] < min) найдет наименьшее из вссего массива
{
    if(M[i] < 0)
    {
        min = M[i];
        minn = i;               //записываем адрес обнаруженного значения
    }
}
int tranzit = M[maxx];          //меняем их местами
M[maxx] = M[minn];
M[minn] = tranzit;
printf("\n");
printf("max value %d\n", max);
printf("last min value %d\n", min);
printf("\n");
for(i = 0; i < 40; i ++)        //вывод результата
{
    printf("%3d\n", M[i]);
}
return 0;
}
