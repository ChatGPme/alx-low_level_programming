#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a character array string
 *
 * Description: Prints the 1st character, then the 3rd character, and so on.
 */
void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
            _putchar(str[i]);
    }
    _putchar('\n');
}
