
#include <stdio.h>

int largest(int num)
{
    if (num == 0)
    {
        return 0;
    }

    int digit = num % 10;
    int max = largest(num / 10);

    if (digit > max)
    {
        return digit;
    }
    else
    {
        return max;
    }
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = largest(num);

    printf("Largest digit = %d", result);

    return 0;
}

