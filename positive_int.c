#include <stdio.h>

int main()
{
    int num, sum = 0, count;
    float average;

    for(count=0;count<=10;count++)
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if(num <= 0)
        {
            continue;
        }

        sum = sum + num;
        
    }

    average = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
