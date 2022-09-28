#include "main.h"

/**
*_puts_recursion - prints's a string followed by a newline
*@s: string to be printed
*return: void
*/

int void_puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(s[0]);
_puts_recursion(s + 1);
}
}
