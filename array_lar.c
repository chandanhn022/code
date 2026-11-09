#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, largest, smallest;
    
    largest = a[0];
    smallest = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }

        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
