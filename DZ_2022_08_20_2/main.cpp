#include <stdio.h>
#include <math.h>

//вычисление площадей фигур и выбор наибольшей

int main()
{
    double a, b, c, s1, s2, s3;

    printf("side of a triangle=");        //задается сторона треугольника
    scanf("%lf", &a);

    printf("side of a square=");          //задается сторона квадрата
    scanf("%lf", &b);

    printf("circle radius=");             //задается радиус окружности
    scanf("%lf", &c);

    s1=(pow(a,2)*sqrt(3))/4;              //площадь равностороннего треугольника

    s2=pow(b,2);                          //площадь квадрата

    s3=M_PI*pow(c,2);                     //площадь окружности


    printf("S triangle=%.2lf\n", s1);
    printf("S square=%.2lf\n", s2);
    printf("S circle=%.2lf\n", s3);

    (s1>s2) ? (s1>s3 ? printf("MAX S=%.2lf\n",s1) : printf("MAX S=%.2lf\n", s3)) : (s2>s3 ? printf("MAX S=%.2lf\n", s2) : printf("MAX S=%.2lf\n", s3));

    return 0;
}
