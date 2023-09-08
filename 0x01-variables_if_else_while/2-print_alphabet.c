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
char alphabet [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char result;
for (i=0; i<=25; i++)
{
result = tolower(alphabet[i]);
putchar(result);
putchar("\n");
}
return (0);
}
