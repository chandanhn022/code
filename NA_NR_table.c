#include <stdio.h>

void table()
{
    int a = 5, i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
}

int main()
{
    table();

    return 0;
}
