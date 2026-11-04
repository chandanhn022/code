#include <stdio.h>

int cube()
{
    int a = 5;

    return a * a * a;
}

int main()
{
    int result;

    result = cube();

    printf("Cube = %d", result);

    return 0;
}
