#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, total;
    float avg;

    printf("Enter 4 subject marks: ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    avg = total / 4.0;

    printf("Average = %.2f\n", avg);

    if(avg >= 90)
    {
        printf("Grade A");
    }
    else if(avg >= 75)
    {
        printf("Grade B");
    }
    else if(avg >= 60)
    {
        printf("Grade C");
    }
    else if(avg >= 35)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

}
