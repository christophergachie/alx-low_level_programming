#include <stdio.h>
int main(void)
{
int i = 0x0;
for(; i <= 0x9; i++)
{
putchar(i + '0');
}
putchar('\n');

return (0);
}
