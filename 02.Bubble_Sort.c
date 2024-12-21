/* Algorithm 02 - Bubble Sort */

#include <stdio.h>

void ascending_order(long long array[], long long array_size)

{

    // Variable Declaration

    long long i;
    long long j;
    long long temp;
    int swapped;

    // Sort the Array - Ascending Order

    for (i = (array_size - 1); i >= 0; i--)
    {
        swapped = 0;
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void descending_order(long long array[], long long array_size)

{

    // Variable Declaration

    long long i;
    long long j;
    long long temp;
    int swapped;

    // Sort the Array - Descending Order

    for (i = (array_size - 1); i >= 0; i--)
    {
        swapped = 0;
        for (j = 0; j < i; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()

{

    // Variable Declaration

    long long i;

    // Header String Formatting

    printf("\n=====================");
    printf("\nBubble Sort Algorithm");
    printf("\n=====================\n\n");

    // Array Declaration

    long long array[] = {35, 50, 89, 14, 25, 65};

    // Array Size

    long long array_size = sizeof(array) / sizeof(array[0]);

    // Print Array

    printf("Original Array     : [");
    for (i = 0; i < array_size; i++)
    {
        printf("%lld", array[i]);
        (i == (array_size - 1)) ? printf("") : printf(", ");
    }
    printf("]\n\n");

    // Sort Array According to Ascending Order

    ascending_order(array, array_size);

    // Print Array

    printf("Ascending Ordered  : [");
    for (i = 0; i < array_size; i++)
    {
        printf("%lld", array[i]);
        (i == (array_size - 1)) ? printf("") : printf(", ");
    }
    printf("]\n\n");

    // Sort Array According to Descending Order

    descending_order(array, array_size);

    // Print Array

    printf("Descending Ordered : [");
    for (i = 0; i < array_size; i++)
    {
        printf("%lld", array[i]);
        (i == (array_size - 1)) ? printf("") : printf(", ");
    }
    printf("]\n");

    return 0;
}
