#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num, i, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++)
    {
        result = multiply(num, i);

        printf("%d x %d = %d\n", num, i, result);
    }

    return 0;
}
