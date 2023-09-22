#include "main.h"
/**
* main -Entry point of the program
* print_alphabet - print all alphabet in lowercase
*
* Return: On success, returns the character written. On error, returns -1.
*/
void print_alphabet(void)
{
int i;
for (i = 'a'; i <=  'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
