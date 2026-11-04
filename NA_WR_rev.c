#include <stdio.h>

int reverse()
{
    int num = 1234, rem, rev = 0;

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return rev;
}

int main()
{
    int result;

    result = reverse();

    printf("Reverse = %d", result);

    return 0;
}
