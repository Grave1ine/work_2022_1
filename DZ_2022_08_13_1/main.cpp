#include <stdio.h>                                          // подключение библиотеки
//набор для тренеровки
int main(void)                                              // void выполняется 1 раз?
{
   int a, b=5, c;                                           //объвление целочисленных переменных
   float x, y=-5,z;                                         //объявление переменных с плавающей запятой (float)
   printf("a=");                                            //Зпись форматированной строки в консоль "a="
   scanf("%d", &a);                                         //ввод в консоль целочисленной переменной "a" (%d-спецификатор флага указывающий на вывод целочисленного значения "десятичное число") &-необходимый символ перед записываемой переменной
   x=c=a;                                                   //Сохранение значения второго операнда в объект, указанный первым операндом ("с" принимает значение "а", "х" принимает значение "с")
   printf("a=%d, c=%d, x=%f\n",a,c,x);                      //Зпись форматированной строки в консоль "a=" "с=" "x=" (%d-десятичное значение для вывода переменных "a","c". Для "х" %f-переменная с плав. запятой )
   a+=b;                                                    //Сложение значения первого операнда со значением второго операнда. сохранение результата в объект, указанный первым операндом.
   printf("a=%d\n", a);                                     //Запись форматированной строки в консоль "a=" (%d-спецификатор флага указывающий на вывод целочисленного значения "десятичное число"), \n-перенос строки
   x+=b+a;                                                  //x=x+b+a
   printf("x=%f\n", x);                                     //Запись форматированной строки в консоль "x=" %f-переменная с плав. запятой, \n-перенос строки
   b+=a--;                                                  //b=b+a, "a" уменьшается на 1
   printf("b=%d\n", b);                                     //Запись форматированной строки в консоль "b=" (%d-спецификатор флага указывающий на вывод целочисленного значения "десятичное число"), \n-перенос строки
   x-=++c;                                                  //x=x-(c+1)
   printf("x=%f\n",x);                                      //Запись форматированной строки в консоль "x=" %f-переменная с плав. запятой, \n-перенос строки
   c=a/b;                                                   //c=a/b
   printf("c=%4d\n",c);                                     /*Запись форматированной строки в консоль "c=" (цифра между % и флагом (4) это минимальное кол.во символов (в данном случае пробелов) слева после "c=")
                                                             %d-спецификатор флага указывающий на вывод целочисленного значения "десятичное число"), \n-перенос строки */
   printf("c=%d\n",c);                                      //Запись форматированной строки в консоль "b=" (%d-спецификатор флага указывающий на вывод целочисленного значения "десятичное число"), \n-перенос строки
   x=5.3;                                                   //Сохранение значения второго операнда в объект, указанный первым операндом
   y+=((--x-1)/x++);                                        //???    как я понял неважно с какой стороны стоит префикс
   printf("x=%f\ty=%.2f\n\n x=%.0f\ty=%.0f\n", x-1,y,x,y-1);// \t табуляция по горизонтали (отступ) точка заполняет пустое отступленное пространство нулями, цифра кол.во отступов вправо, %f-переменная с плав. запятой
   z=a/2;                                                   //z=a/2
   printf(" z=%f\n",z);                                     //Запись форматированной строки в консоль "z=" %f-переменная с плав. запятой, \n-перенос строки
   z=(float) a/2;                                           //выражение float делает переменную "a" на время выполнения команды дробной
   printf(" z=%f\n", z);                                    //Запись форматированной строки в консоль "z=" %f-переменная с плав. запятой, \n-перенос строки
   y=x/2;                                                   //y=x/2
   printf(" y=%f\n",y);                                     //Запись форматированной строки в консоль "y=" %f-переменная с плав. запятой, \n-перенос строки
   y=(int)x/2;                                              //выражение int делает переменную "a" на время выполнения команды целой
   printf(" y=%f\n", y);                                    //Запись форматированной строки в консоль "y=" %f-переменная с плав. запятой, \n-перенос строки
   z=a%2-(x+b)/c+(x-y)/(a-1)+1/4*a-y++ + ++b/3;             //???
   printf(" a=%d b=%d c=%d x=%f y=%f z=%f\n", a,b,c,x,y,z); //вывод переменных в консоль
   return 0;                                                //Оператор return завершает выполнение функции, в которой он задан
}
