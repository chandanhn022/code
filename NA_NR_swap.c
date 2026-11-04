#include <stdio.h>

void swap()
{
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
}

int main()
{
    swap();

    return 0;
}
