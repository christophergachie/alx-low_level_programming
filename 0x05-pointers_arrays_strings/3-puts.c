#include "main.h"
#include <unistd.h>
/**
* _strlen - returns the length of a string
* @s: string
* Return: returns the output of the function _strlen
*/
int _strlen(char *s)
{
int string_length = 0;
for (; *s != '\0'; s++)
{
string_length++;
}
return(string_length);
}
