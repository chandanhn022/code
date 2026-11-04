#include <stdio.h>

int cube(int a)
{
    return a * a * a;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cube(num);

    printf("Cube = %d", result);

    return 0;
}
