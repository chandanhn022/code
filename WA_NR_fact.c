#include <stdio.h>

void factorial(int num)
{
    int i, fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

int main()
{
    factorial(5);

    return 0;
}
