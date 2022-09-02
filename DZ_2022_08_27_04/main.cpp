//перевод из 10 в 2 систему
#include <stdio.h>
int main()
{
unsigned long long int a;
unsigned long long int b = 0;
unsigned long long int z = 0;
int i = 0;
printf("number ");
scanf("%d", &a);
switch (a)
{
    case 0:
    {
    printf("0000");
    break;
    }
    case 1:
    {
    printf("0001");
    break;
    }
    case 2:
    {
    printf("0010");
    break;
    }
    case 3:
    {
    printf("0011");
    break;
    }
    case 4:
    {
    printf("0100");
    break;
    }
    case 5:
    {
    printf("0101");
    break;
    }
    case 6:
    {
    printf("0110");
    break;
    }
    case 7:
    {
    printf("0111");
    break;
    }
    default:
    {
    while (a)
    {
        b = b * 10 + a % 2;
        a = a / 2;
        i++;
    }
    while (i)
    {
        z = z * 0 + b % 10;
        b /= 10;
        printf("%d", z);
        i--;
    }
    break;
    }
}
return 0;
}
