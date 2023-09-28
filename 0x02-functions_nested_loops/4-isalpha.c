#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isalpha -Entry point
* @C accomodates uppercase characters
* Return 1 if c is a character
* and 0 if c is a non-character
*/
int _isalpha(int c)
{
int C;
if ((c >= 'a' && c <= 'z') || (C >= 'A' && C <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
