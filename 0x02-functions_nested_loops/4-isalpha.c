#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isalpha -Entry point
*Check if a character is an alphabet character.
* 
* @param c The character to be checked.
* @return 1 if the character is an alphabet character 
* ('a' to 'z' or 'A' to 'Z'),
* 0 otherwise.
* Return 1 if c is a character
* and 0 if c is a non-character
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
