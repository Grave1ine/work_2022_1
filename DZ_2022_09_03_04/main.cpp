#include <stdio.h>
//Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали
int main()
{
int a[7][7];
int i, j;
for(i = 0; i < 7; ++ i)
{
    for(j = 0; j < 7; ++ j)
    {
        a[i][j] = (i * 7) + j + 1;
        printf("%3d ", a[i][j]);
    }
    printf("\n");
}
printf("\n");
int b = 0;
for(i = 0; i < 7; i ++)
{
    for(j = 0; j < 7; j ++)
    {
        if(i + j < 7)
        {
            printf("%3d ", a[i][j]);
            b += a[i][j];
        }
    }
    printf("\n");
}
printf("\n");
printf("summ:%d ", b);
    return 0;
}
