#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string
 */
void puts_half(char *str)
{
int len = 0;
int n;
int c;
while (str[len])
len++;
c = len % 2 == 0;
n = (c ? len : len - 1) / 2;
n += c ? 0 : 1;
while (n < len)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
