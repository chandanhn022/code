#include <stdio.h>

int main()
{
    int num, sum = 0, i;
    float avg;

    for(i = 1; i <= 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum = sum + num;
    }

    avg = sum / 3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

}
