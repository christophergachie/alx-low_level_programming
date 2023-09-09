#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int first;
int last;
for (first = 0; first <= 9; first++)
{
for (last = 0; last <= 9; last++)
{
putchar(first + '0');
putchar(last + '0');
if (i != 9 || j!= 9)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}
