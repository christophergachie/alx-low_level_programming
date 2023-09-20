#include "main.h"
/**
* rev_string - Reverses a string
* @s: Input string
* Return: void
*/
void rev_string(char *s)
{
char rev = s[0];
int reverse_it = 0;
int a;
for (; s[reverse_it] != '\0'; reverse_it++)
;
for (a = 0; a < reverse_it; a++)
{
reverse_it--;
rev = s[a];
s[a] = s[reverse_it];
s[reverse_it] = rev;
}
}
