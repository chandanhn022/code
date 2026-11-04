#include <stdio.h>

int prime()
{
    int num = 7, i, count = 0;

    if(num <= 1)
    {
        return 0;
    }

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result;

    result = prime();

    if(result == 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }

    return 0;
}
