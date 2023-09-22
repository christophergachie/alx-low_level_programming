#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int reversing_thing;
int decree;
for (reversing_thing = 0; reversing_thing < n--; reversing_thing++)
{
decree = a[reversing_thing];
a[reversing_thing] = a[n];
a[n] = decree;
}
}
