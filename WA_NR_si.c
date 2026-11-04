#include <stdio.h>

void interest(float p, float r, float t)
{
    float si;

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);
}

int main()
{
    interest(10000, 5, 2);

    return 0;
}
