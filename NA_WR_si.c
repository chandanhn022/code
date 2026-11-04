#include <stdio.h>

float interest()
{
    float p = 10000, r = 5, t = 2, si;

    si = (p * r * t) / 100;

    return si;
}

int main()
{
    float result;

    result = interest();

    printf("Simple Interest = %.2f", result);

    return 0;
}
