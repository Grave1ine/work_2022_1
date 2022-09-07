#include <stdio.h>
#include <stdlib.h>   //для рандома
#include <time.h>     //время тоже для рандома
//замена max и последнего min значений
int main()
{
int M[40];
srand(time(nullptr));
for(int i = 0; i < 40; ++i)
{
    M[i] = rand() % 100 -50;
    printf("%3d\n", M[i]);
}
int i;
int max = 0, maxx;

for(i = 0; i < 40; ++ i)
{
    if(M[i] >= max)
    {
        max = M[i];
        maxx = i;
    }
}
int min = 0, minn;
for(i = 0; i < 40; ++ i)
{
    if(M[i] < 0)
    {
        min = M[i];
        minn = i;
    }
}
int tranzit = M[maxx];
M[maxx] = M[minn];
M[minn] = tranzit;
printf("\n");
printf("max value %d\n", max);
printf("last min value %d\n", min);
printf("\n");
for(i = 0; i < 40; i ++)
{
    printf("%3d\n", M[i]);
}
return 0;
}
