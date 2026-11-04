#include <stdio.h>

void interest()
{
    float p = 10000, r = 5, t = 2, si;

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);
}

int main()
{
    interest();

    return 0;
}
