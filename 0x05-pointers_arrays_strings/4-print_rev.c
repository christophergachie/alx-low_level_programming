#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* Return: void
*/
void print_rev(char *s)
{
int longi = 0;
int o;
for (; *s != '\0'; s++)
{
longi++;
}
s--;
for (o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
