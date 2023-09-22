#include "main.h"
/**
* string_toupper - change all lowercase to uppercase
* @n: pointer
*
* Return: n
*/
char *string_toupper(char *n)
{
int capitalization;
capitalization = 0;
while (n[capitalization] != '\0')
{
if (n[capitalization] >= 'a' && n[capitalization] <= 'z')
n[capitalization] = n[capitalization] - 32;
capitalization++;
}
return (n);
}
