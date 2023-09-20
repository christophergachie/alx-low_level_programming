#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
int print_it = 0;
int i = 0;
char *j = str;
int k;
for (; *j != '\0'; y++)
{
print_it++;
}
i = print_it - 1;
k = 0;
do
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
k++;
} while (k <= i);
_putchar('\n');
}
