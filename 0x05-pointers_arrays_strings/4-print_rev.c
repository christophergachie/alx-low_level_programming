#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* Return: void
*/
void print_rev(char *s)
{
int i = 0;
int o;
for (; *s != '\0'; s++)
{
i++;
}
s--;
for (o = i; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
