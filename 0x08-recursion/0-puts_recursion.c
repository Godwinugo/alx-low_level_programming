#include "main.h"

/**
*void_puts_recursion(char *s) - prints's a string followed by a newline
*
*@s: source string
*return: void
*/

void_puts_recursion(char *s);
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
