#include <stdio.h>

int palindrome(int num)
{
    int temp, rem, rev = 0;

    temp = num;

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(temp == rev)
    {
        return 1;
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

    result = palindrome(num);

    if(result == 1)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}
