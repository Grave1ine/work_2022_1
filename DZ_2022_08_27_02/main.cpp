#include <stdio.h>
// наименьший делитель
int main()
{
    int A;
    int B;
    int C;
    printf("enter first number: ");
    scanf("%d", &A);
    printf("enter second number: ");
    scanf("%d", &B);
    printf("enter third number: ");
    scanf("%d", &C);
    int min = 1;
    if (A < B)
    {
        if (A < C)
        {
            min = A;
        } else {
                min = C;
               }
    } else {
           if (B < C){
               min = B;
           }
           else {
               min = C;
           }
           }
    int result = 1;
    for(int i = 2; i <= min; i++)
    {
        if(A % i == 0 && B % i == 0 && C % i == 0)
        {
            result = i;
            break;
        }
    }
    printf("%d", result);
    return 0;
}
