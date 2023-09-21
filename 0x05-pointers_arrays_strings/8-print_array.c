#include "main.h"
#include <stdio.h>

/**
 * print_array - prints `n` elements of an array of integers
 * @a: pointer to an integer array
 * @n: number of elements to print
 *
 * Description: Numbers are separated by a comma and space.
 * Numbers are displayed in the same order they are stored in the array.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;

    for (n--; n >= 0; n--, i++)
    {
        printf("%d", a[i]);
        if (n > 0)
        {
            printf(", ");
        }
    }
    printf("\n");
}
