/* Algorithm 01 - Linear Search */

#include <stdio.h>

int linear_search(int array[], int N, int x)

{

    // Variable Declaration

    int i;

    // Searching Operation

    for (i = 0; i < N; i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1; // Target is not found
}

int main()

{

    int random_number_list[] = {25, 39, 45, 69, 85, 98};
    int N = sizeof(random_number_list) / sizeof(random_number_list[0]);

    int result01 = linear_search(random_number_list, N, 30);
    int result02 = linear_search(random_number_list, N, 69);

    printf("\n%d\n", result01);
    printf("%d\n", result02);

    return 0;
}