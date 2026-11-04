#include <stdio.h>

int smallest(int n)
{
    int rem, s;

    if(n < 10)
    {
        return n;
    }

    rem = n % 10;
    s = smallest(n / 10);

    if(rem < s)
        return rem;
    else
        return s;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
        n = -n;

    printf("Smallest digit = %d", smallest(n));

    return 0;
}
