#include <stdio.h>

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    return reverse(num / 10, rev*10 + num%10);
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = reverse(num, 0);

    if (num == result)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}
