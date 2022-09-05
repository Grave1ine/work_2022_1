#include <math.h>
#include <stdio.h>
// расстановка разрядов от большего к меньшему
int main()
{
int x;
int z = 0;
int i = 0;
int a = 0;
int b = 0;
int d = 0;
printf("number ");
scanf("%d", &x);
while (x)
{
    z = z * 10 + x % 10;
    b = z * 0 + x % 10;        //находим последний символ
    i ++;
    x /= 10;
    if (i == 1)
    {
        a = z;                 //находим первый символ
    }
    d = z;
}
int c = 0;
while (d)
{
    c = c * 10 + d % 10;
    d /= 10;
}
int e = 10;
int f;
f = c;
i = i - 1;
for (; e <= z;)
{
    e = e * 10;
    if (a > b)
    {
        f = c - b * pow(10, i) + a * pow(10, i);
        f = (f / 10 + 0.1 * b) * 10;
    }
}
printf("%d\n", f);
return 0;
}
