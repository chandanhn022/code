#include <stdio.h>

int factorial()
{
    int num = 5, i;
    int fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);

    return 0;
}
