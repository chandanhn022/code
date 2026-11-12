#include <stdio.h>

int main()
{
    int a = 30;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n",&a);
    printf("Value stored in pointer = %p\n",p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
