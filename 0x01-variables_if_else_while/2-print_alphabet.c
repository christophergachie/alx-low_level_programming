#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char alphabet [] = {'a', 'b', 'c', 'd', 'e', 'f',
'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};
char result;
for (i = 0; i <= 25; i++)
{
result = tolower(alphabet[i]);
putchar(result);
}
putchar('\n');
return (0);
}
