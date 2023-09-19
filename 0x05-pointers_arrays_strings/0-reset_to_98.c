#include <stdio.h>
#include <unistd.h>
/**
* main - check the code 
*
* Return: Always 0.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
int _putchar(char c)
{
return (write(1, &c, 1));
}
void reset_to_98(int *n)
{
*n = 98;
}
int main (void)
{
int a;
int *p;
p = &a;
a = 402;
reset_to_98(p);
_putchar( a/10 +'0');
_putchar(a%10 + '0');
_putchar('\n');
return 0;
}
