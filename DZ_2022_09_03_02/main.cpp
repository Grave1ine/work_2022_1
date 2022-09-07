#include <stdio.h>
#include <stdlib.h>   //для рандома
#include <time.h>     //время
//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15)
int main()
{
constexpr int a = 30;
constexpr int b = 15;
int A[a];
int B[b];
printf("--------A[30]-----------\n");
srand(time(nullptr));                        //запуск рандома
for(int i = 0; i < a; ++i)
{
    A[i] = rand() % 50 - 25;                 //задается интервал верхний и нижний предел рандома
    printf("%3d \n", A[i]);
}
printf("--------B[15]-----------\n");
for(int i = 0; i < b; ++i)
{
    B[i] = rand() % 50 - 25;                 //задается интервал верхний и нижний предел рандома
    printf("%3d \n", B[i]);
}
printf("------------------------\n");
printf("ID non-occurring values ");
for(int i = 0; i < a; i ++)
{
    int c = 0;
    for(int i1 = 0; i1 < b && !c; i1 ++)
    {
        if (A[i] == B[i1])
        {
            c ++;
        }
    }
    if (c == 0)
    {
        printf("%d ", i);
    }
}
    return 0;
}
