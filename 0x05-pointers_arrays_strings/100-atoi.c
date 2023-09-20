#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int n = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
}
else if (n != 0)
{
break;
}
i++;
}
return (n * sign);
}
