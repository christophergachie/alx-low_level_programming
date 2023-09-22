#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: destination string
* @src: source string
* @n: maximum number of bytes to concatenate
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_length = 0;
int src_index = 0;
while (dest[dest_length] != '\0')
{
dest_length++;
}
int i = dest_length;
while (src_index < n && src[src_index] != '\0')
{
dest[i] = src[src_index];
i++;
src_index++;
}
dest[i] = '\0';
return dest;
}
