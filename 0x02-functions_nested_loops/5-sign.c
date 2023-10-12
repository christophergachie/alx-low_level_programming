#include <stdio.h>
/**
* print_sign- Entry point
* @print_sign returns 1 is n > 0, returns 0 if n== 0
* returns -1 if n < 0
**/
int print_sign(int n)
{
if(n > 0)
{
_putchar('+');
return (1);
}
else if(n == 0)
{
_putchar('0');
return (0);
}
else if(n < 0)
{
_putchar('-');
return (-1);
}
}
