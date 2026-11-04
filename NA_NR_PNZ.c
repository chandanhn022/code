#include <stdio.h>

void check()
{
    int num = -5;

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
    check();

    return 0;
}
