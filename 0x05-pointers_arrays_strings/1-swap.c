#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps the values of two integers.
* @a: Pointer to the first integer
* that will be swapped
* @b: Pointer to the second integer
* that will be swapped
*
* Description: This function takes two pointers
* to integers, 'a' and 'b', and swaps
* their values. The value pointed to by
* 'a' will be assigned to 'b', and vice versa.
*
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int pointer_swap;
pointer_swap = *a;
*a = *b;
*b = pointer_swap;
}
