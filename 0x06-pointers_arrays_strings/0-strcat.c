#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: a pointer to the concatenated string (dest)
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;
for (; dest[dest_len] != '\0'; dest_len++)
{
}
for (; src[src_len] != '\0'; src_len++)
{
}
for (int i = 0; i < src_len; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + src_len] = '\0';
return dest;
}
