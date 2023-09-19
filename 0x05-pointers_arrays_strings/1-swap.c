#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - Sets an integer to 98.
*
* swap_int - this function swaps the values of two integers.
* @a: Pointer to the first integer that will be swapped
* @b: Pointer to the second integer that will be swapped
*
* Description: This function takes two pointers to integers, 'a' and 'b', and swaps
* their values. The value pointed to by 'a' will be assigned to 'b', and vice versa.
* main - check the code
*
* Return: Always 0.
* and sets the value of the integer to 98.
*/
void swap_int(int *a, int *b)
{
int pointer_swap;
pointer_swap = *a;
*a = *b;
*b = pointer_swap;
}
