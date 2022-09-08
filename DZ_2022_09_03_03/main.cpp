#include <stdio.h>
//Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой
int main()
{
int a[7][7];
for (int i = 0; i < 7; i ++)
{
    for(int j = 0; j < 7; j ++)
    {
        a[i][j] = (i * 7) + j + 1;
        printf("%3d ", a[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("print k: ");
int k;
scanf("%d", &k);
for(int i = 0; i < 7; i ++)
{
    int tranzit = a[k][i];
    a[k][i] = a[i][k];
    a[i][k] = tranzit;
}
printf("\n");
for (int i = 0; i < 7; i ++)
{
    for(int j = 0; j < 7; j ++)
    {
        printf("%3d ", a[i][j]);
    }
    printf("\n");
}
return 0;
}
