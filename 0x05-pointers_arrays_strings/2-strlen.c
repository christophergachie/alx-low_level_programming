#include <stdio.h>
/**
* _strlen - Calculates the length of a string.
* @s: The string to calculate the length of.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int len;
for (len = 0; *(s + len) != '\0'; len++)
{
}
return (len);
}
