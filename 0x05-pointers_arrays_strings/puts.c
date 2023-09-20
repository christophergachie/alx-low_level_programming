#include <unistd.h>
void _puts(char *str)
{
while (*str)
{
write(1, str, 1);
str++;
}
}
