#include "main.h"
#include <stdio.h>
/**
* print_array - a function that prints n elements of an array
* @a: array name
* @n: is the number of elements OF the array to be printed
* Return: a and n inputs
*/
void print_array(int *a, int n)
{
int b;
if (n > 0)
{
printf("%d", a[0]);
for (b = 1; b < n; b++)
{
printf(", %d", a[b]);
}
}
printf("\n");
}
