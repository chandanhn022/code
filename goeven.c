#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("Even number");
    goto end;

odd:
    printf("Odd number");

end:
}
