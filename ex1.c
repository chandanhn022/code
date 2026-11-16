#include <stdio.h>
#include <stdlib.h>

// DATA SEGMENT
int global = 100;

// BSS SEGMENT
int count;

int main()
{
    // DATA SEGMENT
    static int x = 200;

    // BSS SEGMENT
    static int y;

    // STACK SEGMENT
    int a = 10;

    // HEAP SEGMENT
    int *p = malloc(sizeof(int));

    if(p == NULL)
    {
        return 1;
    }

    *p = 500;

    printf("Global = %d\n", global);
    printf("Count = %d\n", count);
    printf("Static x = %d\n", x);
    printf("Static y = %d\n", y);
    printf("Local a = %d\n", a);
    printf("Heap value = %d\n", *p);

    free(p);

    return 0;
}
