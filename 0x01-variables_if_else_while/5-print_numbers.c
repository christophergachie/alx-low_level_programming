#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0x0;
do {
printf("%d", i++);
} while (i <= 9);
putchar('\n');
return (0);
}
