#include <stdio.h>

void check(int num)
{
    if(num > 0)
    {
        printf("Positive number");
    }
    else if(num < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    check(-5);

    return 0;
}
