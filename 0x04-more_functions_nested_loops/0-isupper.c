#include "main.h"
/**
* _isupper - checks for uppercase letters
* @c: char to check
*
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
for (int i = 'A'; i <= 'Z'; i++)
{
if (c == i)
return (1);
}
 return (0);
}
