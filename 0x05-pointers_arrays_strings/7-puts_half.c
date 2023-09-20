#include "main.h"
/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int i, n, tr;
tr = 0;
i = 0;
while (str[i] != '\0')
{
tr++;
i++;
}
n = (tr / 2);
if ((tr % 2) == 1)
n = ((tr + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
