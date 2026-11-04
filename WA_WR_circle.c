#include <stdio.h>

float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float r, result;

    printf("Enter radius: ");
    scanf("%f", &r);

    result = area(r);

    printf("Area of circle = %.2f", result);

    return 0;
}
