#include "main.h"
/**
* main -Entry point of the program
* @c - outputs a single character to the screen
* Description: This function writes the character 'c' to the standard output.
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
