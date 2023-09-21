#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a character array string
 *
 * Description: If the length of the string is odd, it prints the (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    i++;

    for (i /= 2; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
