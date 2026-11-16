#include <stdio.h>

int main()
{
    int a = 100;

    void *p = &a;

    printf("Integer value = %d", *(int *)p);

    return 0;
}
