#include <stdio.h>

void palindrome()
{
    int num = 121;
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
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
}

int main()
{
    palindrome();

    return 0;
}
