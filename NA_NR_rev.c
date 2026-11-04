#include <stdio.h>

void reverse()
{
    int num = 1234, rem, rev = 0;

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reverse = %d", rev);
}

int main()
{
    reverse();

    return 0;
}
