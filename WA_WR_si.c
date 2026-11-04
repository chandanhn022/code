#include <stdio.h>

float interest(float p, float r, float t)
{
    float si;

    si = (p * r * t) / 100;

    return si;
}

int main()
{
    float p, r, t, result;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    result = interest(p, r, t);

    printf("Simple Interest = %.2f", result);

    return 0;
}
