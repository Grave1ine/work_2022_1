#include <stdio.h>
#include <math.h>
//формула задание 1


int main()
{
    float y, x;                            //описание переменных

    printf("input x=");
    scanf("%f", &x);                        //ввод переменной

    y=(2*cos(x-M_PI/6)+sqrt(2))/(1/(2*log(x))+pow(sin(pow(x,2)),2));

    printf("y=%.2f",y);
    return 0;
}
