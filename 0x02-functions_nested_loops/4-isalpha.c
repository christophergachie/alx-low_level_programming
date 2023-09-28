#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isalpha -Entry point
* @C accomodates uppercase characters
* @c fucntion argument checked if true
* Return 1 if c is a character
* and 0 if c is a non-character
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
