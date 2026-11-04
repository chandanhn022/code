#include <stdio.h>

void factorial()
{
    int num = 5, i;
    int fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

int main()
{
    factorial();

    return 0;
}
