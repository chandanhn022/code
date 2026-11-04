#include <stdio.h>

int check(int num)
{
    if(num > 0)
    {
        return 1;
    }
    else if(num < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = check(num);

    if(result == 1)
    {
        printf("Positive number");
    }
    else if(result == -1)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
