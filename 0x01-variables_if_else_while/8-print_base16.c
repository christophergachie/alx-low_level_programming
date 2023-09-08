#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char hexa;
for (hexa = 0; hexa < 0x10; hexa++)
{
if (hexa < 10)
{
putchar(hexa + '0');
}
else
{
putchar(hexa - 10 + 'a');
}
}
putchar('\n');
return (0);
}
