#include <stdio.h>

//определение кол.во цифр в водимом числе

int main()
{
int i = 0;
int a;
printf("entet the number: ");
scanf("%d", &a);
    while(a)
    {
        a /= 10;
        i++;
    }
    printf("amount: %d", i);
    return 0;
}
