#include <stdio.h>

void reverse(int num)
{
    int rem, rev = 0;

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
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    return 0;
}
